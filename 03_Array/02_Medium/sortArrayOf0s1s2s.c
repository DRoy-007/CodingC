#include <stdio.h>

int swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// third version made by me, insipred from dutch flag algorithm, here I used loop iterator as mid
void sortArrayOf0s1s2s(int arr[], int n){
    int low = 0, high = n - 1;

    for (int i = 0; i <= high; i++){
        if (arr[i] == 0){
            swap(&arr[i], &arr[low]);
            low++;
        }

        else if (arr[i] == 2){
            swap(&arr[i], &arr[high]);
            high--;
            i--;
        }
    }
}

/* second version made by me, but again was of double pass though I used single loop

void sortArrayOf0s1s2s(int arr[], int n){
    int left = 0, fullTraverse = 0;

    for (int right = left + 1; right < n; right++){
        if (arr[right] == 0 && fullTraverse == 0){
            swap(&arr[right], &arr[left]);
            left++;
        }

        else if (arr[right] == 1 && fullTraverse == 1){
            swap(&arr[right], &arr[left]);
            left++;
        }

        if (right == n-1){
            right = left;
            fullTraverse++;
            if (fullTraverse == 2) break;
        }
    }
}
*/

/* first version made by me, but was of double pass

void sortArrayOf0s1s2s(int arr[], int n){
    int freqOf0 = 0, freqOf1 = 0, freqOf2 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0) freqOf0++;
        else if (arr[i] == 1) freqOf1++;
        else freqOf2++;
    }

    for (int i = 0; i < n; i++){
        if (freqOf0 > 0){
            arr[i] = 0;
            freqOf0--;
            continue;
        }

        if (freqOf1 > 0){
            arr[i] = 1;
            freqOf1--;
            continue;
        }

        if (freqOf2 > 0){
            arr[i] = 2; 
            freqOf2--;
            continue;
        }
    }
}
*/

int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    sortArrayOf0s1s2s(arr, index);

    printf("The sorted array is: ");
    for (int i = 0; i < index; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}