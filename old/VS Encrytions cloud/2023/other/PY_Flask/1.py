# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   29-06-2023 12:14:39 AM       00:14:39
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-06-2023 01:01:13 PM       13:01:13


from flask import Flask, render_template, request
import os

app = Flask(__name__, template_folder="temp")
app.config['UPLOAD_FOLDER'] = '2023/PY_Flask/upload'  # Update the UPLOAD_FOLDER path

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/upload', methods=['POST'])
def upload():
    file = request.files['file']
    if file:
        filename = file.filename
        file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))
        return 'File uploaded successfully!'
    else:
        return 'No file selected!'

if __name__ == '__main__':
    app.run(debug=True)
