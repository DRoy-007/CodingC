#include <stdio.h>

typedef struct valid{
        int ans;
        int isPresent;
} valid;

valid majorityElement(int arr[], int n){
    int freq = 0;
    valid majorElement;

    for (int i = 0; i < n; i++){
        if (freq == 0) majorElement.ans = arr[i];

        if (majorElement.ans == arr[i]) freq++;
        else freq--;
    }

    freq = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == majorElement.ans) freq++;
    }

    if (freq > n/2) majorElement.isPresent = 1;
    else majorElement.isPresent = 0;

    return majorElement;
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

    valid majorElement = majorityElement(arr, index);

    if (majorElement.isPresent) printf("The major element (>n/2) in the given array is: %d\n", majorElement.ans);
    else printf("No major element is present in the array with majority more than n/2.\n");

    return 0;
}