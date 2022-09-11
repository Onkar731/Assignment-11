/* Write a function to print all Prime numbers between two given numbers. (TSRN) */

#include<stdio.h>
void printPrimeBetween(int, int);

int main(){

    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    printPrimeBetween(n1, n2);
    return 0;
}

void printPrimeBetween(int n1, int n2)
{
    int i = n1<n2 ? ++n1: ++n2, j;

    while(i < (n1>n2 ? n1: n2)){
        for(j = 2; j < i; j++){
            if(i % j == 0)
                break;
        }
        if(i == j)
            printf("%d ", i);
        i++;
    }
}