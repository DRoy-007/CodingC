#include <stdio.h>

void sumOfFirstNNumbers(int sum, int n){
    if (n < 1){
        printf("%d\n", sum);
        return;
    }
    sumOfFirstNNumbers(sum + n, n - 1);
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    sumOfFirstNNumbers(0, n);
    
    return 0;
}