#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rotateMatrixBy90(int** matrix, int size){
    // tranpose the matrix
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }

    // reverse the transpose matrix
    int start, end;
    for (int i = 0; i < size; i++){
        start = 0; end = size - 1;
        while(start < end){
            swap(&matrix[i][start], &matrix[i][end]);
            start++;
            end--;
        }
    }
}

int main(){
    int size;

    printf("Enter size of square matrix: ");
    scanf("%d", &size);

    int** matrix = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));
    }

    printf("Enter square matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotateMatrixBy90(matrix, size);

    printf("The modified array is:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf ("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Free memory
    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}