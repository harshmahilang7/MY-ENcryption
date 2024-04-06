# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   24-07-2023 12:32:01 AM       00:32:01
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 24-07-2023 12:32:04 AM       00:32:04

import os
import datetime
from moviepy.editor import VideoFileClip, concatenate_videoclips, TextClip, CompositeVideoClip

def get_last_edited_folder(directory):
    folders = [f for f in os.listdir(directory) if os.path.isdir(os.path.join(directory, f))]
    last_modified_folder = max(folders, key=lambda f: os.path.getmtime(os.path.join(directory, f)))
    return os.path.join(directory, last_modified_folder)

def cut_video(video_path, output_path, duration):
    video = VideoFileClip(video_path)
    if video.duration < duration:
        return video
    else:
        return video.subclip(0, duration)

def add_logo(video, logo_path):
    logo = (VideoFileClip(logo_path)
            .set_position(("right", "top"))
            .set_duration(video.duration)
            .resize(height=50))  # Adjust the logo's height as needed
    return CompositeVideoClip([video, logo])

def main():
    input_directory = "Your_Input_Directory"  # Replace with the path to your directory with video files
    output_directory = "Your_Output_Directory"  # Replace with the path to your output directory
    duration_to_cut = 5 * 60  # 5 minutes in seconds

    last_edited_folder = get_last_edited_folder(input_directory)
    video_files = [f for f in os.listdir(last_edited_folder) if f.endswith((".mp4", ".avi", ".mkv"))]

    clips = []
    for video_file in video_files:
        video_path = os.path.join(last_edited_folder, video_file)
        video = cut_video(video_path, output_directory, duration_to_cut)
        clips.append(video)

    final_clip = concatenate_videoclips(clips, method="compose")
    output_file = os.path.join(output_directory, f"output_{datetime.datetime.now().strftime('%Y%m%d_%H%M%S')}.mp4")

    logo_path = "Your_Logo_Path"  # Replace with the path to your logo image

    final_clip_with_logo = add_logo(final_clip, logo_path)
    final_clip_with_logo.write_videofile(output_file, codec="libx264")

if __name__ == "__main__":
    main()
