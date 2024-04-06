# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   29-06-2023 01:19:39 PM       13:19:39
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-06-2023 01:23:45 PM       13:23:45


from flask import Flask, render_template, request
from PIL import Image
import os

app = Flask(__name__, template_folder="temp")
app.config['UPLOAD_FOLDER'] = '2023/PY_Flask/upload'

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/upload', methods=['POST'])
def upload():
    file = request.files['file']
    if file:
        image = Image.open(file)
        width, height = image.size  
        return render_template('result.html', width=width, height=height)
    else:
        return 'No file selected!'

if __name__ == '__main__':
    app.run(debug=True)

