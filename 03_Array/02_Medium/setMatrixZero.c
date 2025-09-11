#include <stdio.h>
#include <stdlib.h>

void setMatrixZero(int** arr, int row, int coloumn){
    int isFirstRow0 = 0, isFirstCol0 = 0;

    for (int j = 0; j < coloumn; j++){
        if (arr[0][j] == 0){
            isFirstRow0 = 1;
            break;
        }
    }
    for (int i = 0; i < row; i++){
        if (arr[i][0] == 0){
            isFirstCol0 = 1;
            break;
        }
    }

    for(int i = 1; i < row; i++){
        for (int j = 1; j < coloumn; j++){
            if (arr[i][j] == 0){
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < row; i++){
        for (int j = 1; j < coloumn; j++){
            if (arr[i][0] == 0 || arr[0][j] == 0) arr[i][j] = 0;
        }
    }

    if (isFirstRow0){
        for (int j = 0; j < coloumn; j++){
            arr[0][j] = 0;
        }
    }

    if (isFirstCol0){
        for (int i = 0; i < row; i++){
            arr[i][0] = 0;
        }
    }
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

    setMatrixZero(matrix, row, col);

    printf("The modified array is:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf ("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Free memory
    for (int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}