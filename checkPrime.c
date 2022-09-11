/* Write a function to check whether a given number is Prime or not. (TSRS) */

#include<stdio.h>
int checkPrime(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(checkPrime(num))
        printf("%d is Prime Number", num);
    else
        printf("%d is not Prime Number", num);
    
    return 0;
}

int checkPrime(int n)
{
    int i;
    for(i = 2; i < n; i++)
        if(n % i == 0)
            return 0;

    if(i == n)
        return 1;
}