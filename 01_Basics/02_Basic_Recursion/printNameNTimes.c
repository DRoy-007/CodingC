#include <stdio.h>

void printNameNTimes(int i, int n){
    if (i > n) return;
    printf("Code Surgeon\n");
    printNameNTimes(i+1, n);
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printNameNTimes(1, n);

    return 0;
}