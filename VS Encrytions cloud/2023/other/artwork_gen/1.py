# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   29-06-2023 04:22:40 PM       16:22:40
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-06-2023 04:25:54 PM       16:25:54
from PIL import Image, ImageDraw
import random

# Create a blank canvas
canvas_width = 1000
canvas_height = 1000
canvas = Image.new('RGB', (canvas_width, canvas_height), 'white')
draw = ImageDraw.Draw(canvas)

# Generate colorful patterns on the canvas
num_shapes = 1000
for _ in range(num_shapes):
    x = random.randint(0, canvas_width)
    y = random.randint(0, canvas_height)
    size = random.randint(10, 100)
    color = (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))
    draw.rectangle([(x, y), (x + size, y + size)], fill=color, outline=None)

# Save the artwork as an image file
image_file = 'artwork.png'
canvas.save(image_file)

print(f"Artwork saved as {image_file}")
