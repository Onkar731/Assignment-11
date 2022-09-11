/* Write a function to print pascal triangle (TSRN) */

#include<stdio.h>

long fact(int);
long combination(int, int);
void printPascalTriangle(int);

int main(){

    int n;
    
    printf("Enter a number : ");
    scanf("%d", &n);

    printPascalTriangle(n);

    return 0;
}

long fact(int n) {

    long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;

    return f;
}

long combination(int n, int r) {
    return fact(n)/(fact(n - r) * fact(r));
}

void printPascalTriangle(int n) {

    int temp, k;

    for(int i = 0; i < n; i++)
    {
        temp = n + i;
        k = n - i;
        int r = 0;

        for(int j = 0; j <= temp; j++)
        {
            if(j == k){
                printf("%d", combination(i, r));
                k += 2;
                r++;
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }

}