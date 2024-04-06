# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   29-06-2023 01:27:22 PM       13:27:22
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-06-2023 02:45:06 PM       14:45:06


from flask import Flask, render_template, send_file
import os
app = Flask(__name__,template_folder="temp")

@app.route('/')
def index():
    return render_template('dowm.html')

@app.route('/download', methods=['GET'])
def download():
    document_path = 'C:\\Users\\harsh\\OneDrive\\MY ENcryption\\VS Encrytions cloud\\2023\\PY_Flask\\upload\\Doc1.docx'
    return send_file(document_path, as_attachment=True)

if __name__ == '__main__':
    app.run(debug=True)
