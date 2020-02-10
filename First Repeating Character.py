#!/usr/bin/python3

"""Finds the first character repeated in a string containing [a-z]"""

letter_occurence = [0]*26

for i in input():
  ind=ord(i)-ord('a')
  if letter_occurence[ind]!=0:
    print(i)
    break
  else:
    letter_occurence[ind]+=1
