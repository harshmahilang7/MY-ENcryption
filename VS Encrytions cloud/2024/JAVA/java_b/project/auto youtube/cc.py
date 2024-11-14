# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   24-07-2023 12:56:38 AM       00:56:38
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 24-07-2023 01:56:47 PM       13:56:47
import os
from googleapiclient.discovery import build

vid = 'Q0VkBe0AvMc'
key = 'AIzaSyC5LrH_JukE0PnVD03kuiaN9hRWTBBiWrE'
import os
import googleapiclient.discovery
from google.oauth2.credentials import Credentials

def is_video_cc_licensed(vid):
    api_service_name = "youtube"
    api_version = "v3"
    scopes = ["https://www.googleapis.com/auth/youtube.readonly"]

    # Replace with your own API key or set it as an environment variable 'YOUTUBE_API_KEY'.
    api_key = os.getenv(key)

    if not api_key:
        raise ValueError("Please provide your YouTube API key.")

    youtube = googleapiclient.discovery.build(api_service_name, api_version, developerKey=api_key)

    try:
        response = youtube.videos().list(
            part="contentDetails",
            id=video_id
        ).execute()

        # Check if the video exists and if it has a 'creativecommons' license.
        if "items" in response and len(response["items"]) > 0:
            content_details = response["items"][0]["contentDetails"]
            licensed = "creativecommons" in content_details["licensedContent"]
            return licensed

    except Exception as e:
        print(f"An error occurred: {e}")

    return False

if __name__ == "__main__":
    # Replace 'VIDEO_ID' with the actual YouTube video ID you want to check.
    video_id_to_check = vid

    is_licensed = is_video_cc_licensed(vid)
    if is_licensed:
        print("The video is under the Creative Commons Attribution license (reuse allowed).")
    else:
        print("The video is not under the Creative Commons Attribution license.")
