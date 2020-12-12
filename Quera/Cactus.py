"""
--------------------------------------------------
Name    : Cactus
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 13/Dec/2020
Link    : https://quera.ir/problemset/contest/52542/
--------------------------------------------------
"""
numberOfGroups = int(input())
groups = list(map(int, input().split()))
for i in groups:
    if(i <= 3):
        print(i*"*")
    else:
        print("*")
