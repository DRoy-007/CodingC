#include <stdio.h>

typedef struct pair{
    int first;
    int second;
} pair;

int floor(int arr[], int n, int target){
    int start = 0, end = n-1, ans = -1, mid;

    while (start <= end){
        mid = start + (end - start)/2;

        if (arr[mid] <= target){
            ans = mid;
            start = mid + 1;
        }

        else end = mid - 1;
    }

    return ans;
}

int ceil(int arr[], int n, int target){
    int start = 0, end = n-1, ans = -1, mid;

    while (start <= end){
        mid = start + (end - start)/2;
        
        if (arr[mid] >= target){
            ans = mid;
            end = mid - 1;
        }

        else start = mid + 1;
    }

    return ans;
}

pair floorOrCeil(int arr[], int n, int target){
    pair ans;
    ans.first = floor(arr, n, target);
    ans.second = ceil(arr, n, target);

    return ans;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array in sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element of whose floor & ceil is to found: ");
    scanf("%d", &target);

    pair ans = floorOrCeil(arr, n, target);

    if (ans.first == -1) printf("No floor is present for the target(%d) in the given array.\n", target);
    else printf("The floor of the target from the given array is: %d\n", arr[ans.first]);

    if (ans.second == -1) printf("No ceil is present for the target(%d) in the given array.\n", target);
    else printf("The ceil of the target from the given array is: %d\n", arr[ans.second]);

    return 0;
}