/*
Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.
*/

#include <stdio.h>
#define min(a, b) ((a < b) ? a : b)

int nCr(int n, int r){
    long long res = 1;
    int num = n;
    int cap = min(r, (n-r));

    for (int i = 1; i <= cap; i++, num--){
        res *= num;
        res /= i;
    }

    return res;
}

// Variation 1
int pascalElement(int row, int col){
    return nCr(row - 1, col - 1);
}

// Variation 2
int pascalRow(int row){
    for (int col = 1; col <= row; col++){
        printf("%d ", pascalElement(row, col));
    }
    printf("\n");
}

// Variation 3
void uptoNthPascalRow(int n){
    for (int row = 1; row <= n; row++){
        for (int space = 1; space <= n - row; space++){
            printf("  ");
        }
        for (int col = 1; col <= row; col++){
            printf("%d ", pascalElement(row, col));
        }
        printf("\n");
    }
}

int main(){
    int row;
    printf("Enter the row number: ");
    scanf("%d", &row);

    int col;
    printf("Enter the column number: ");
    scanf("%d", &col);

    printf("The element on the row %d and column  %d of pascal's triangle is: %d\n", row, col, pascalElement(row, col));

    printf("The elements on the row %d: \n\n", row);
    pascalRow(row);

    printf("The pascal triangle upto %dth row is: \n\n", row);
    uptoNthPascalRow(row);

    return 0;
}