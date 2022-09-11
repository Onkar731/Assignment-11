/* Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function */

#include<stdio.h>

long fact(int);

int main(){

    long sum = 0;

    for(int i = 1; i <= 5; i++)
    {
        sum += fact(i)/i;
    }

    printf("Sum of the series is %d", sum);

    return 0;
}

long fact(int n)
{
    int f = 1;

    for(int i = 1; i <= n; i++)
        f *= i;

    return f;
}