# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   24-07-2023 12:07:14 AM       00:07:14
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 24-07-2023 12:52:42 AM       00:52:42
import os
import re
import string
import random
import hashlib
from datetime import datetime
from pytube import YouTube

def create_folder(path):
    if not os.path.exists(path):
        os.makedirs(path)

def generate_random_string(length):
    characters = string.ascii_letters + string.digits
    return ''.join(random.choice(characters) for _ in range(length))

def generate_hash(data, length):
    data_str = str(data)
    hash_object = hashlib.md5(data_str.encode())
    return hash_object.hexdigest()[:length]

def sanitize_filename(title):
    pattern = r'[^\w\s-]'
    title = re.sub(pattern, '', title).strip()
    title = re.sub(r'\s+', ' ', title)
    return title

def truncate_title(title, max_length):
    return title[:max_length].strip()

def on_progress_callback(stream, chunk, bytes_remaining):
    total_bytes = stream.filesize
    bytes_downloaded = total_bytes - bytes_remaining
    percentage = (bytes_downloaded / total_bytes) * 100
    print(f"Download progress: {percentage:.2f}%  ({bytes_downloaded / (1024*1024):.2f} MB / {total_bytes / (1024*1024):.2f} MB)", end='\r')

def has_creative_commons_license(video):
    # Check if the video has a Creative Commons license
    return video.license.lower() == 'creativecommons'

def download_youtube_video(url, folder_path):
    try:
        yt = YouTube(url, on_progress_callback=on_progress_callback)
        if not has_creative_commons_license(yt):
            print(f"Skipping: {yt.title} (Not under a Creative Commons license)")
            return

        video_title = yt.title
        video_title = sanitize_filename(video_title)
        video_title = truncate_title(video_title, 70)  # Limit the title to 70 characters
        unique_id = generate_hash(url, 5)  # Convert the URL to string before generating hash
        folder_name = f"{datetime.now().strftime('%Y%m%d_%H%M%S')}_{video_title}_{unique_id}"
        folder_path = os.path.join(folder_path, folder_name)
        create_folder(folder_path)

        video_stream = yt.streams.get_highest_resolution()
        if video_stream:
            print(f"Downloading: {video_title}")
            video_stream.download(output_path=folder_path)
            print(f"\nVideo downloaded to: {folder_path}")
        else:
            print("No downloadable video stream found.")
    except Exception as e:
        print(f"Error occurred: {e}")

def main():
    input_file_path = "link.txt"  # Replace with the path to your text file containing the YouTube links
    output_folder = "Downloaded_Videos"  # Replace with the folder path where you want to save the downloaded videos

    create_folder(output_folder)

    with open(input_file_path, "r") as file:
        links = file.readlines()

    for link in links:
        download_youtube_video(link.strip(), output_folder)

if __name__ == "__main__":
    main()
