#include<stdio.h>

int fib(int n) {

    if(n<=1) return n;
    
    
    int fnum = fib(n-1);
    int snum = fib(n-2);
    return fnum+snum;
    
}

void main() {
    int n;
    printf("Enter value for n: ");
    scanf("%d", &n);

    printf("The fibonacci value for %d is %d", n, fib(n));
}