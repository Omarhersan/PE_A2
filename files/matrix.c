#include "matrix.h"
#include <stdio.h>

#define N 3

void create_matrix(int Array[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter the element Array[%d][%d]: ", i, j);
            scanf("%d", &Array[i][j]);
        }
    }
    printf("\nThe given matrix is:\n");
    print_matrix(Array);
    


}

void print_matrix(int Array[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if(Array[i][j] < 10 && Array[i][j] > 0)
                printf("| %d  |", Array[i][j]);
            else{
                printf("| %d |", Array[i][j]);
            }
            
        }
        printf("\n");
    }
}

void add_matrix(int Array1[N][N], int Array2[N][N], int Result[N][N])
{
    int i, j;
    print("Matrix 1:\n");
    print_matrix(Array1);
    print("Matrix 2:\n");
    print_matrix(Array2);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            Result[i][j] = Array1[i][j] + Array2[i][j];
        }
    }
    print("Resultant Matrix:\n");
    print_matrix(Result);
}

void sub_matrix(int Array1[N][N], int Array2[N][N], int Result[N][N])
{
    print("Matrix 1:\n");
    print_matrix(Array1);
    print("Matrix 2:\n");
    print_matrix(Array2);
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            Result[i][j] = Array1[i][j] - Array2[i][j];
        }
    }
    print("Resultant Matrix:\n");
    print_matrix(Result);
}

void mul_matrix(int Array1[N][N], int Array2[N][N], int Result[N][N])
{
    printf("Matrix 1:\n");
    print_matrix(Array1);
    printf("Matrix 2:\n");
    print_matrix(Array2);

    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            Result[i][j] = 0;
            for (k = 0; k < N; k++)
            {
                Result[i][j] += Array1[i][k] * Array2[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    print_matrix(Result);
}

void transpose_matrix(int Array[N][N], int Result[N][N])
{
    printf("Matrix:\n");
    print_matrix(Array);

    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            Result[i][j] = Array[j][i];
        }
    }

    printf("Transpose Matrix:\n");
    print_matrix(Result);
}


