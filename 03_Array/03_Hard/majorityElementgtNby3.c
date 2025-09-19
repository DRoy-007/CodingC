#include <stdio.h>
#define INT_MIN -2147483648

typedef struct majorEl{
    int val;
    int isMajor;
} majorEl;

majorEl ans[2];

void majorityElementgtNby3(int arr[], int n){
    int count1 = 0, count2 = 0, el1 = INT_MIN, el2 = INT_MIN;
    ans[0].isMajor = 0;
    ans[1].isMajor = 0;

    for (int i = 0; i < n; i++){
        if (count1 == 0 && el2 != arr[i]){
            count1++;
            el1 = arr[i];
        }

        else if (count2 == 0 && el1 != arr[i]){
            count2++;
            el2 = arr[i];
        }

        else if (arr[i] == el1) count1++;

        else if (arr[i] == el2) count2++;

        else{
            count1--; count2--;
        }
    }

    ans[0].val = el1; ans[1].val = el2;

    count1 = 0; count2 = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == ans[0].val) count1++;
        else if (arr[i] == ans[1].val) count2++;

        if (count1 > (n/3)) ans[0].isMajor = 1;
        if (count1 > (n/3)) ans[1].isMajor = 1;
    }
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    majorityElementgtNby3(arr, n);

    if (ans[0].isMajor == 1 && ans[1].isMajor == 1) printf("The major elements are: %d and %d\n", ans[0].val, ans[1].val);
    else if (ans[0].isMajor == 1) printf("The only major element is: %d", ans[0].val);
    else if (ans[1].isMajor == 1) printf("The only major element is: %d", ans[1].val);
    else printf("There is no such major element in the given array with more than n/3 majority.");

    return 0;
}