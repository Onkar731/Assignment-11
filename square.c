/* Write a program in C to find the square of any number using the function */

#include<stdio.h>

long square(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Square of %d is %d", num, square(num));

    return 0;
}

long square(int num)
{
    return num*num;
}