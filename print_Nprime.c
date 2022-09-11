/* Write a function to print N prime numbers. (TSRN) */

#include<stdio.h>
void Nprime(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    Nprime(n);
    return 0;
}

void Nprime(int n)
{
    int i = 1, j;

    while(n--){
        while(i++){
            for(j = 2; j < i; j++){
                if(i % j == 0)
                    break;
            }
            if(i == j){   
                printf("%d ", i);
                break;
            }
        }
    }
}