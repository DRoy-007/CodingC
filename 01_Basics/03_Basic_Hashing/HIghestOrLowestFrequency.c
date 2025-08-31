#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int* hashCreation(int arr[], int hashArr[], int n){
    for (int i = 0; i < n; i++){
        hashArr[arr[i]]++;
    }
    return hashArr[1002];
}

void frequency(int hashArr[]){
    
}

int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter the elements of the array (<1000 and >= 0): ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    int hashArr[1001] = {0}; // hash array defined in main
    hashCreation(arr, index, hashArr);

    int highestFreq = INT_MIN, lowestFreq = INT_MAX;
    int highestFreqElement, lowestFreqElement;

    for (int i = 0; i < 1002; i++){
        if(hashArr[i] > highestFreq){
            highestFreq = hashArr[i];
            highestFreqElement = i;
        }
        if(hashArr[i] < lowestFreq){
            lowestFreq = hashArr[i];
            lowestFreqElement = i;
        }
    }
    printf("Most Frequent element is \'%d\' which appears \'%d\' times(s).", highestFreqElement, highestFreq);
    printf("Least Frequent element is \'%d\' which appears \'%d\' times(s).", lowestFreqElement, lowestFreq);
}