"""
--------------------------------------------------
Name    : Akhjoon Taraf Nist
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 11/Dec/2020
Link    : https://quera.ir/problemset/contest/3538/
--------------------------------------------------
"""
weekdays = {"shanbe": 0, "1shanbe": 0, "2shanbe": 0,
            "3shanbe": 0, "4shanbe": 0, "5shanbe": 0, "jome": 0}
days = list()
for i in range(3):
    count = int(input())
    days = [day for day in input().split()]
    for day in days:
        weekdays[day] += 1
print(sum(value == 0 for value in weekdays.values()))
