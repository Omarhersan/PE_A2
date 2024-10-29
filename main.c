#include "matrix.h"

int main(){
    int A[N][N], B[N][N], C[N][N];

    printf("Enter the first matrix:\n");
    create_matrix(A);
    printf("Enter the second matrix:\n");
    create_matrix(B);
    printf("Enter the third Matrix:\n");
    create_matrix(C);


    // Add the two matrices
    int Result_sum[N][N], Result_diff[N][N], Result_mul[N][N];
    add_matrix(A, B, Result_sum);

    // Subtract the two matrices
    sub_matrix(A, B, Result_diff);

    // Multiply the two matrices
    mul_matrix(A, B, Result_mul);

    // Transpose of result_mult
    transpose_matrix(Result_mul, C);



    return 0;
}




