#include <stdio.h>

void printNTo1(int n){
    if (n < 1){
        printf ("\n");
        return;
    }
    printf("%d ", n);
    printNTo1(n-1);
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printNTo1(n);
    
    return 0;
}