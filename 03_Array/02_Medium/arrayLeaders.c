#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrReverser(int arr[], int start, int end){
    while (start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int* arrayLeaders(int arr[], int n, int *totalLeaders) {
    int *leaderArr = (int*) malloc(sizeof(int));

    int leaderIndex = n - 1;
    leaderArr[0] = arr[leaderIndex];
    *totalLeaders = 1;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[leaderIndex]) {
            leaderIndex = i;
            (*totalLeaders)++;
            leaderArr = (int*) realloc(leaderArr, (*totalLeaders) * sizeof(int));
            if (leaderArr == NULL) {
                printf("Memory reallocation failed!\n");
                exit(1);
            }
            leaderArr[(*totalLeaders) - 1] = arr[i];
        }
    }

    arrReverser(leaderArr, 0, *totalLeaders - 1);

    return leaderArr;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalLeaders;
    int *leaderArr = arrayLeaders(arr, n, &totalLeaders);

    printf("The leaders of the given array are: ");
    for (int i = 0; i < totalLeaders; i++) {
        printf("%d ", leaderArr[i]);
    }
    printf("\n");

    free(leaderArr);

    return 0;
}