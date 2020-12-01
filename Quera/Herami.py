"""
--------------------------------------------------
Name    : Herami Dar Barareh
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 01/Dec/2020
Link    : https://quera.ir/problemset/contest/10169/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B4%D8%B1%DA%A9%D8%AA%D9%87%D8%A7%DB%8C-%D9%87%D8%B1%D9%85%DB%8C-%D8%AF%D8%B1-%D8%A8%D8%B1%D8%B1%D9%87
--------------------------------------------------
"""
h, direction = input().split()
num = 0
i = 2
start = (2**(int(h)+1))-1
j = len(direction)-1
direction = direction[::-1]
while(j >= 0):
    if direction[j] == "L":
        num = num + (2**j)
    start -= i
    i *= 2
    j -= 1
print(start+num)
