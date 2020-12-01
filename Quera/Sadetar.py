"""
--------------------------------------------------
Name    : Sadetar
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 24/Nov/2020
Link    : https://quera.ir/problemset/contest/3403/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B3%D8%A7%D8%AF%D9%87-%D8%AA%D8%B1
--------------------------------------------------
"""
num = list()
sum = 0
product = 1
for i in range(4):
    num.append(int(input()))
    sum = sum + num[i]
    product = product*num[i]
min = max = num[0]
for i in range(1, 4):
    if(num[i] > max):
        max = num[i]
    if(num[i] < min):
        min = num[i]
print("Sum : {0}\nAverage : {1}\nProduct : {2}\nMAX : {3}\nMIN : {4}".format(
    sum, (sum/4), product, max, min))
