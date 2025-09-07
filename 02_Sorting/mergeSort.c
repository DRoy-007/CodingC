#include <stdio.h>

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;  // size of left subarray
    int n2 = right - mid;     // size of right subarray

    int L[n1], R[n2];  // temporary arrays

    // Copy data into L[] and R[]
    for (int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    // Merge the two sorted arrays
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[left] = L[i];
            i++;
        } else {
            arr[left] = R[j];
            j++;
        }
        left++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[left] = L[i];
        i++;
        left++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[left] = R[j];
        j++;
        left++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, sizeof(arr)/sizeof(int)-1);

    printf("Sorted Array: ");
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}