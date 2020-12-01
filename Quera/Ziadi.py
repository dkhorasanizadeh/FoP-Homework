"""
--------------------------------------------------
Name    : Karmande ziadi
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 25/Nov/2020
Link    : https://quera.ir/problemset/contest/10636/%D8%B3%D8%A4%D8%A7%D9%84-%DA%A9%D8%A7%D8%B1%D9%85%D9%86%D8%AF-%D8%B2%DB%8C%D8%A7%D8%AF%DB%8C
--------------------------------------------------
"""
karmand = list()
karmandCount = int(input())
for i in range(karmandCount):
    temp = input().split()
    karmand.append(temp[0])
duplicates = {i: karmand.count(i) for i in karmand}
print(max(duplicates.values()))
