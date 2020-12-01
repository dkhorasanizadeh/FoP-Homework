"""
--------------------------------------------------
Name    : Chap Baraks
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 01/Dec/2020
Link    : https://quera.ir/problemset/contest/3405/%D8%B3%D8%A4%D8%A7%D9%84-%DA%86%D8%A7%D9%BE-%D8%A8%D8%B1%D8%B9%DA%A9%D8%B3
--------------------------------------------------
"""
numbers = list()
i = -1
while(True):
    temp = int(input())
    if (temp == 0):
        break
    else:
        numbers.append(temp)
        i += 1
while(i >= 0):
    print(numbers[i])
    i -= 1
