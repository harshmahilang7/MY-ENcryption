# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   23-07-2023 11:47:27 PM       23:47:27
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 24-07-2023 12:02:37 AM       00:02:37
import os
import re
from datetime import datetime
from pytube import YouTube

def create_folder(path):
    if not os.path.exists(path):
        os.makedirs(path)

def clean_filename(filename):
    # Remove invalid characters from the filename
    cleaned_filename = re.sub(r'[<>:"/\\|?*]', '', filename)
    return cleaned_filename.strip()

def download_youtube_video(url, folder_path):
    try:
        yt = YouTube(url)
        video_title = yt.title
        cleaned_video_title = clean_filename(video_title)

        video_stream = yt.streams.filter(progressive=True, file_extension="mp4").first()

        if video_stream:
            folder_name = f"{datetime.now().strftime('%Y%m%d_%H%M%S')}_{cleaned_video_title}"
            folder_path = os.path.join(folder_path, folder_name)
            create_folder(folder_path)

            print(f"Downloading: {video_title}")
            video_stream.download(output_path=folder_path)
            print(f"Video downloaded to: {folder_path}")
        else:
            print("No downloadable video stream found.")
    except Exception as e:
        print(f"Error occurred: {e}")

def main():
    input_file_path = "link.txt"  # Replace with the path to your text file containing the YouTube links
    output_folder = "data"  # Replace with the folder path where you want to save the downloaded videos

    create_folder(output_folder)

    with open(input_file_path, "r") as file:
        links = file.readlines()

    for link in links:
        download_youtube_video(link.strip(), output_folder)

if __name__ == "__main__":
    main()
