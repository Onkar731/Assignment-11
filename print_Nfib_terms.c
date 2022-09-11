/* Write a function to print first N terms of Fibonacci series. (TSRN) */

#include<stdio.h>
void printNfib(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNfib(n);
    return 0;
}

void printNfib(int n)
{
    int i, a = -1, b = 1, add;

    for(i = 1; i <= n; i++){
        add = a + b;
        printf("%d ", add);
        a = b;
        b = add;
    }
}