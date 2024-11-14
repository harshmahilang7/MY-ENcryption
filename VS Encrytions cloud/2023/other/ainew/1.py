# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   06-07-2023 02:44:37 PM       14:44:37
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 06-07-2023 03:11:37 PM       15:11:37
import gpt4all
l_P="C:\\Users\\harsh\\AppData\\Local\\nomic.ai\\GPT4All\\ggml-vicuna-13b-1.1-q4_2.bin"
from gpt4all import GPT4All
gpt=GPT4All(model_name="ggml-vicuna-13b-1.1-q4_2.bin",model_path="C:\\Users\\harsh\\AppData\\Local\\nomic.ai\\GPT4All\\")
gpt.chat_completion([{"role":"assistant","content":"what is the model"}])
# with model.chat_session():
#     response = model.generate(prompt='hello', top_k=1)
#     response = model.generate(prompt='write me a short poem', top_k=1)
#     response = model.generate(prompt='thank you', top_k=1)
#     print(model.current_chat_session)