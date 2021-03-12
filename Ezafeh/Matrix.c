/*
--------------------------------------------------
Name    : Matrix Determinant
Author  : Danial Khorasanizadeh
Course  : Foundations of programmin (Fall 99)
Date    : 22/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
int size;
void cofactor(int n, float matrix[size][size], float temp[size][size], int q)
{
    int i = 0, j = 0;
    for (int row = 1; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col != q)
            {
                temp[i][j++] = matrix[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
float determinant(int n, float matrix[size][size])
{
    float determinantNum = 0;
    if (n == 1)
    {
        return matrix[0][0];
    }
    float temp[size][size];
    char sign = 1;
    for (int i = 0; i < n; i++)
    {
        cofactor(n, matrix, temp, i);
        determinantNum += sign * matrix[0][i] * determinant(n - 1, temp);
        sign = -sign;
    }
    return determinantNum;
}
int main()
{
    scanf("%d", &size);
    float matrix[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("%.2f", determinant(size, matrix));
    return 0;
}
