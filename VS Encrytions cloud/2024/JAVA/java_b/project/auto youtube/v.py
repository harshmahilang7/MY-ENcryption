# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   24-07-2023 02:00:40 PM       14:00:40
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 24-07-2023 02:01:36 PM       14:01:36
from moviepy.video.io.VideoFileClip import VideoFileClip
from moviepy.video.fx.all import crop

def trim_video(input_file, output_file, duration_to_trim=5):
    try:
        # Load the video clip
        video_clip = VideoFileClip(input_file)
        # Get the duration of the video
        video_duration = video_clip.duration
        # Calculate the start and end time for trimming
        start_time = duration_to_trim
        end_time = video_duration - duration_to_trim
        # Trim the video
        trimmed_clip = video_clip.subclip(start_time, end_time)
        # Save the trimmed video to the output file
        trimmed_clip.write_videofile(output_file)
        # Close the video clip
        video_clip.reader.close()
        video_clip.audio.reader.close_proc()

        print(f"Video trimmed successfully and saved to {output_file}")

    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    # Replace 'input_video.mp4' with the path to your input video file.
    input_file_path = "input_video.mp4"

    # Replace 'output_trimmed_video.mp4' with the desired output file name and location.
    output_file_path = "output_trimmed_video.mp4"

    # Set the duration (in seconds) to trim from the front and back of the video.
    trim_duration = 5 * 60  # 5 minutes

    trim_video(input_file_path, output_file_path, trim_duration)

