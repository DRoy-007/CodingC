// Given a list of non-negative integers and an integer k. Find the smallest value in the list which is greater than k.

#include <stdio.h>
#include <limits.h>

typedef struct valid{
    int ans;
    int is_Present;
} valid;

valid smallest_Number(int arr[], int n, int k, valid* validator){
    for (int i = 0; i < n; i++){
        if (arr[i] < validator->ans && arr[i] > k){
            validator->ans = arr[i];
            validator->is_Present = 1;
        }
    }
    return *validator;
}

int main(){
    int n, k;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);

    int arr[n];
    printf("Enter the array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    valid validator;
    validator.ans = INT_MAX;
    validator.is_Present = 0;

    smallest_Number(arr, n, k, &validator);
    if(validator.is_Present) printf("%d", validator.ans);
    else printf("No valid answer is found.\n");
    return 0;
}