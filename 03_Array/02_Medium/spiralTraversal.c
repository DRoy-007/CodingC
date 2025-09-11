#include <stdio.h>
#include <stdlib.h>

void spiralTraversal(int** arr, int row, int col){
    int top = 0, bottom = row - 1, right = col - 1, left = 0;

    printf("The matrix in spiral traversal looks like: ");
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++){
            printf("%d ", arr[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++){
            printf("%d ", arr[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
    printf("\n");
}

int main(){
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int** matrix = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++) {
        matrix[i] = (int*)malloc(col * sizeof(int));
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    spiralTraversal(matrix, row, col);

    return 0;
}