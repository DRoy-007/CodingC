#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// variant 1
void alternatePosAndNeg1(int arr[], int n, int newArr1[]){
    int posIndex = 0, negIndex = 1;
    
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            newArr1[negIndex] = arr[i];
            negIndex += 2;
        }
        else {
            newArr1[posIndex] = arr[i];
            posIndex += 2;
        }
    }
}

// variant 2
void alternatePosAndNeg2(int arr[], int n, int newArr2[]){
    int totalPos = 0, totalNeg = 0;

    for(int i = 0; i < n; i++){
        if (arr[i] < 0) totalNeg++;
        else totalPos++;
    }

    int posArr[totalPos], negArr[totalNeg];
    int a = 0, b = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            negArr[b] = arr[i];
            b++;
        }
        else{
            posArr[a] = arr[i];
            a++;
        }
    }

    int index;

    if (totalPos > totalNeg){
        for (int i = 0; i < totalNeg; i++){
            newArr2[2*i] = posArr[i];
            newArr2[2*i + 1] = negArr[i];
        }

        index = 2*totalNeg;
        for (int i = totalNeg; i < totalPos; i++, index++){
            newArr2[index] = posArr[i];
        }
    }
    
    else {
        for (int i = 0; i < totalPos; i++){
            newArr2[2*i] = posArr[i];
            newArr2[2*i + 1] = negArr[i];
        }
    
        index = 2*totalPos;
        for (int i = totalPos; i < totalNeg; i++, index++){
            newArr2[index] = negArr[i];
        }
    }
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // int newArr1[n]; // for variant 1
    // alternatePosAndNeg1(arr, n, newArr1);
    int newArr2[n]; // for variant 2
    alternatePosAndNeg2(arr, n, newArr2);

    printf("The newly modified array is: ");
    for (int i = 0; i < n; i++){
        // printf("%d ", newArr1[i]);
        printf("%d ", newArr2[i]);
    }
    printf("\n");
}