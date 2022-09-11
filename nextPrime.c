/* Write a function to find the next prime number of a given number. (TSRS) */

#include<stdio.h>
int nextPrime(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Next Prime of %d is %d", num, nextPrime(num));
    return 0;
}

int nextPrime(int n)
{
    int i;

    while(1){
        n++;
        for(i = 2; i < n; i++)
            if(n % i == 0)
                break;
        
        if(i == n)
            return n;
    }
}