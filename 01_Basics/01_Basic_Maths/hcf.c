#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int hcf(int num1, int num2){
    for(int i = min(num1, num2); i > 0; i--){
        if (num1 % i == 0 && num2 % i == 0) return i;
    }
    return -1;
}

int main() {
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 1: ");
    scanf("%d", &n2);
    printf("HCF is: %d\n", hcf(n1, n2));

    return 0;
}