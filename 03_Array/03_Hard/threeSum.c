#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if (arr[j] <= pivot){
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void sort(int arr[], int low, int high){
    if (low < high){
        int pIndex = partition(arr, low, high);

        sort(arr, low, pIndex - 1);
        sort(arr, pIndex + 1, high);
    }
}

int threeSum(int arr[], int n, int ans[]){
    int j, k, count = 0, posComb = 0;


    for (int i = 0; i < n; i++){
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        j = i + 1;
        k = n - 1;

        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if (sum > 0) k--;
            else if (sum < 0) j++;
            else{
                ans[count] = arr[i];
                ans[count + 1] = arr[j];
                ans[count + 2] = arr[k];
                posComb++;
                count += 3;

                j++;
                k--;

                while(j < k && arr[j] == arr[j - 1]) j++;
                while(j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return posComb;
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, 0, n-1);

    int ans[n*3];

    int posComb = threeSum(arr, n, ans);

    printf("\nUnique triplets that sum to 0:\n");
    for (int i = 0; i < 3 * posComb; i++){
        printf("%d ", ans[i]);
        if ((i + 1) % 3 == 0) printf("\n");
    }

    return 0;
}