#include <stdio.h>

int hashArr[1001] = {0};

void unionOfSet(int arr1[], int m, int arr2[], int n, int* minVal, int* maxVal){
    *minVal = 1000;
    *maxVal = 0;
    for (int i = 0; i < m; i++){
        hashArr[arr1[i]]++;
        if (arr1[i] < *minVal) *minVal = arr1[i];
        if (arr1[i] > *maxVal) *maxVal = arr1[i];
    }
    for (int i = 0; i < n; i++){
        hashArr[arr2[i]]++;
        if (arr2[i] < *minVal) *minVal = arr2[i];
        if (arr2[i] > *maxVal) *maxVal = arr2[i];
    }
}

int main(){
    int index1;
    printf("Enter the size of array 1: ");
    scanf("%d", &index1);

    int arr1[index1];
    printf("Enter the elements of the array (<1000 and >= 0): ");
    for (int i = 0; i < index1; i++) {
        scanf("%d", &arr1[i]);
    }

    int index2;
    printf("Enter the size of array 2: ");
    scanf("%d", &index2);

    int arr2[index2];
    printf("Enter the elements of the array (<1000 and >= 0): ");
    for (int i = 0; i < index2; i++) {
        scanf("%d", &arr2[i]);
    }

    int minVal, maxVal;
    unionOfSet(arr1, index1, arr2, index2, &minVal, &maxVal);

    printf("Union of the two sets is: ");
    for (int i = minVal; i <= maxVal; i++){
        if(hashArr[i] > 0) printf("%d ", i);
    }
    printf("\n");

    return 0;
}