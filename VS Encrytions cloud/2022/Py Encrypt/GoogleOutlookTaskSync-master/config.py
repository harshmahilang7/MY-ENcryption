# -*- coding: utf-8 -*-
# @Author: Dastan_Alam
# @Date:   18-10-2011 05:07:08 AM       05:07:08
# @Last Modified by:   Dastan_Alam
# @Last Modified time: 29-10-2022 09:58:49 AM       09:58:49
import pickle
import os
# import win32api
# import win32con

filename=os.getenv('APPDATA') + "\sync.bin"



class config:
  
  def __init__(self):
    
    try:
      input = open(filename,'r')
      self.idMap = pickle.load(input)
    except IOError:
      # Config file doesn't exist
      print ("Config file doesn't exist")
      self.idMap = {}

  def dump(self):
    output = open(filename,'wb')
    pickle.dump(self.idMap,output)
    
  def addMapping(self,otask,gtask):
    self.idMap[otask['id']] = gtask['id']
    self.idMap[gtask['id']] = otask['id']
  