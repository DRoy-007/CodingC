#include <stdio.h>

void checkForPrime(int n){
    int count = 0;
    for (int i = 1; i <= n; i++){
        if(n % i == 0) count++;
    }
    if (count == 2) printf("This is prime.\n");
    else printf("This is not prime.\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkForPrime(n);

    return 0;
}