"""
--------------------------------------------------
Name    : Alpha Centaury
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 01/Dec/2020
Link    : https://quera.ir/problemset/university/66859/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81-%D9%85%D8%A8%D8%A7%D9%86%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D9%BE%D8%A7%DB%8C%DB%8C%D8%B2-%DB%B9%DB%B8-%D8%A2%D9%84%D9%81%D8%A7-%D9%82%D9%86%D8%B7%D9%88%D8%B1%D8%B3
--------------------------------------------------
"""
import math
number, base = input().split()
number = int(number)
base = int(base)
inOtherBase = list()
numberMap = {0: 0, 1: 1, 2: 2, 3: 3, 4: 4, 5: 5, 6: 6, 7: 7,
             8: 8, 9: 9, 10: "A", 11: "B", 12: "C", 13: "D", 14: "E", 15: "F"}
i = -1
while(number > 0):
    inOtherBase.append(number % base)
    number = math.floor(number/base)
    i += 1
while(i >= 0):
    print(numberMap.get(inOtherBase[i]), end="")
    i -= 1
