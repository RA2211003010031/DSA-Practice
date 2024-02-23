#include<stdio.h>

// print name n times
void printName(int n) {
    if(n<=0) {
        return;
    }  

    printf("Name is : Adarsh\n");
    n--;
    printName(n);
}

// print linearly from 1 to n
void printNum(int n) {
    int i = 1;

    if(i>n) 
    return;

    printf("%d\n", i);
    i++;
    printNum(n);

}

void printNumRev(int n) {
    if(n<1) 
    return;

    printf("%d\t", n);
    n--;
    printNumRev(n);
}

void main() {
    int n = 100;
    // printName(n);
    // printNum(n);
    // printNumRev(n);
    
}