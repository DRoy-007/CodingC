#include <stdio.h>

typedef struct pair {
    int a;
    int b;
} pair;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int sortArr[], int low, int high) {
    int pivot = sortArr[low];
    int leftWall = low;

    for (int i = low + 1; i <= high; i++) {
        if (sortArr[i] < pivot) {
            leftWall++;
            swap(&sortArr[i], &sortArr[leftWall]);
        }
    }

    swap(&sortArr[leftWall], &sortArr[low]);
    return leftWall;
}

void quickSort(int sortArr[], int low, int high) {
    if (low < high) {
        int partitionIndex = partition(sortArr, low, high);
        quickSort(sortArr, low, partitionIndex - 1);
        quickSort(sortArr, partitionIndex + 1, high);
    }
}

pair twoSum(int sortArr[], int n, int target) {
    int start = 0, end = n - 1, sum;
    pair p;

    while (start < end) {
        sum = sortArr[start] + sortArr[end];

        if (sum > target) {
            end--;
        } 
        else if (sum < target) {
            start++;
        } 
        else { 
            p.a = sortArr[start];
            p.b = sortArr[end];
            return p;
        }
    }
    p.a = -1; p.b = -1;
    return p;
}

int main() {
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    int sortArr[index];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
        sortArr[i] = arr[i];
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    quickSort(sortArr, 0, index - 1);

    pair p = twoSum(sortArr, index, target);

    if (p.a == -1) {
        printf("No two numbers sum up to target\n");
        return 0;
    }

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < index; i++) {
        if (arr[i] == p.a && idx1 == -1) idx1 = i;
        else if (arr[i] == p.b && idx2 == -1) idx2 = i;
    }

    printf("The original indices which yield the target are: %d, %d\n", idx1, idx2);

    return 0;
}
