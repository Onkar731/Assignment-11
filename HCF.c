/* Write a function to calculate HCF of two numbers. (TSRS) */

#include<stdio.h>
int HCF(int, int);

int main(){

    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    printf("HCF of %d and %d is %d", n1, n2, HCF(n1, n2));
    return 0;
}

int HCF(int n1, int n2)
{
    int hcf;

    for(hcf = (n1>n2 ? n1: n2); hcf >= 1; hcf--){
        if(n1 % hcf == 0 && n2 % hcf == 0){
            return hcf;
        }
    }
}