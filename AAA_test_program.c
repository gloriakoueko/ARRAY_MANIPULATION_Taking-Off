#include <stdio.h>

void addMatrix(int A[10][10], int B[10][10], int C[10][10], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrix(int A[10][10], int B[10][10], int C[10][10], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrix(int A[10][10], int B[10][10], int C[10][10], int n){
    int i, j, k;
    int sum = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            sum = 0;
            for(k = 0; k < n; k++){
                sum = sum + (A[i][k] * B[k][j]);
            }
            C[i][j] = sum;
        }
    }
}

void GetMatrix(int A[10][10], int n){
    int i, j;
    printf("Enter %d numbers:\n", n * n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
}

void PrintMatrix(int A[10][10], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[10][10] = {0}, B[10][10] = {0}, C[10][10] = {0};
    int n, choice, i, j;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    GetMatrix(A, n);
    GetMatrix(B, n);

    printf("Enter a choice from the list below:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            addMatrix(A, B, C, n);
            printf("Result of Addition:\n");
            PrintMatrix(C, n);
            break;

        case 2:
            subtractMatrix(A, B, C, n);
            printf("Result of Subtraction:\n");
            PrintMatrix(C, n);
            break;

        case 3:
            multiplyMatrix(A, B, C, n);
            printf("Result of Multiplication:\n");
            PrintMatrix(C, n);
            break;

        default:
            printf("INVALID OPTION");
    }

    return 0;
}