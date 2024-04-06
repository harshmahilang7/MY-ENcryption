# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   29-06-2023 04:36:19 PM       16:36:19
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-06-2023 04:36:21 PM       16:36:21

import random
import numpy as np
from pydub import AudioSegment
from moviepy.editor import *

# Set parameters
duration = 10  # Duration of the beat in seconds
fps = 24  # Frames per second for the video
width, height = 640, 480  # Video dimensions

# Generate random beat
beat = np.random.choice([0, 1], int(duration * 1000 / 2))
beat_audio = sum([AudioSegment.silent(500) if b == 0 else AudioSegment.sine(440).to_mono() * 500 for b in beat])

# Save beat as audio file
beat_audio.export("beat.wav", format="wav")

# Create video frames
frames = []
for i, b in enumerate(beat):
    img = np.zeros((height, width, 3), dtype=np.uint8)
    img[:, :, :] = (0, 0, 0) if b == 0 else (255, 255, 255)
    frames.append(ImageClip(img).set_duration(1 / fps))

# Concatenate video frames
video = concatenate_videoclips(frames, method="compose")

# Set video dimensions and export
video = video.resize((width, height))
video.write_videofile("beat_video.mp4", fps=fps)
