/*
--------------------------------------------------
Name    : Zini
Author  : Danial Khorasanizadeh
Course  : Quera
Date    : 21/Nov/2020
Link    : https://quera.ir/problemset/contest/33023/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B2%DB%8C%D9%86%DB%8C
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int m, n, counter = 0, temp;
    scanf("%d%d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &temp);
            matrix[i][j] = temp;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if ((matrix[i][j] < matrix[i][j + 1] && matrix[i][j] < matrix[i][j - 1] && matrix[i][j] > matrix[i + 1][j] && matrix[i][j] > matrix[i - 1][j]) || (matrix[i][j] > matrix[i][j + 1] && matrix[i][j] > matrix[i][j - 1] && matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i - 1][j]))
            {
                counter++;
            }
        }
    }
    printf("%d", counter);
    return 0;
}