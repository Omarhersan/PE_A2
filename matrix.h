#ifndef MATRIX_H
#define MATRIX_H
#define N 3

#include <stdio.h>

void create_matrix(int Array[N][N]);
void print_matrix(int Array[N][N]);
void add_matrix(int Array1[N][N], int Array2[N][N], int Result[N][N]);
void sub_matrix(int Array1[N][N], int Array2[N][N], int Result[N][N]);
void mul_matrix(int Array1[N][N], int Array2[N][N], int Result[N][N]);
void transpose_matrix(int Array[N][N], int Result[N][N]);

#endif 