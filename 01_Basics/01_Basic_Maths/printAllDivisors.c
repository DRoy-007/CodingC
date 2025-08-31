#include <stdio.h>

void printAllDivisors(int n){
    for(int i = 1; i <= n; i++){
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printAllDivisors(n);
}