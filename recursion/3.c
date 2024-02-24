#include<stdio.h>

// factorial of a number

int fact(int n) {
    if(n==0) {
        return 1;
    }

    else
    return n * fact(n-1);

}

void main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("%d",fact(n));
}