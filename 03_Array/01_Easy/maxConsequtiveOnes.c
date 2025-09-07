#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)

int maxConsequtiveOnes(int arr[], int n){
    int freq = 0, maxFreq = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 1){
            freq++;
            maxFreq = max(freq, maxFreq);
        }
        else freq = 0;
    }

    return maxFreq;
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

    printf("The maximum consequtive ones are: %d\n", maxConsequtiveOnes(arr, index));

    return 0;
}