#include <stdio.h>

void print1ToN(int i, int n){
    if (i > n){
        printf("\n");
        return;
    }
    printf("%d ", i);
    print1ToN(i+1, n);
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    print1ToN(1, n);

    return 0;
}