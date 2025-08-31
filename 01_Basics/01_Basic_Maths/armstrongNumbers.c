#include <stdio.h>

int power(int base, int power){
    if (power == 0) return 1;
    if (base == 0) return 0;
    if (base == 1) return 1;

    long long modifiedBase = base;
    int ans = 1;
    while(power > 0){
        if (power % 2 == 1) ans *= modifiedBase;
        modifiedBase *= modifiedBase;
        power /= 2;
    }
    return ans;
}

int isAmstrongNumber(int n){
    int num = n;
    int total_Digits = count_Digits(num);
    int arm_num = 0;
        
    while(num != 0){
        arm_num += Pow((num % 10), total_Digits);
        num /= 10;
    }
        
    if (n == arm_num) return 1;
    else return 0;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong_Number(n)) printf("It is an Armstrong Number.\n");
    else printf("It is not an Armstrong Number.\n");

    return 0;
}