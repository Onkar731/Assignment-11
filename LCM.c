/* Write a function to calculate LCM of two numbers. (TSRS) */

#include<stdio.h>
int LCM(int, int);

int main(){

    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    printf("LCM of %d and %d is %d", n1, n2, LCM(n1, n2));
    return 0;
}

int LCM(int n1, int n2)
{
    int lcm;

    for(lcm = (n1<n2? n1: n2); lcm <= n1*n2; lcm++){
        if(n1 % lcm == 0 && n2 % lcm == 0){
            return lcm;
        }
    }
}