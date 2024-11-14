# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   29-06-2023 01:17:08 PM       13:17:08
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-06-2023 01:17:15 PM       13:17:15


from flask import Flask, render_template, request
import csv

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
        csv_data = file.read().decode('utf-8')  # Read the uploaded CSV data
        csv_rows = csv_data.split('\n')  # Split the CSV data into rows
        num_rows = len(csv_rows) - 1  # Subtract 1 to exclude the header row

        return f'The number of rows in the CSV file is: {num_rows}'
    else:
        return 'No file selected!'

if __name__ == '__main__':
    app.run(debug=True)
