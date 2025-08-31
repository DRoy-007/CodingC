#include <stdio.h>

int factorialOfN(int n){
    if (n == 1 || n == 0) {
        return 1;
    }
    return factorialOfN(n-1)*n;
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int fact = factorial(n); 
    printf("%d\n", fact);

    return 0;
}