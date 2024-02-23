#include<stdio.h>

void callA(int a)
{
    if(a<0 || a>5) {
        return;
    }

        printf("%d\n",a);
        a++;
        callA(a);
    
}

void main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    callA(a);
}