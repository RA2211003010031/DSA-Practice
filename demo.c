#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Class{
    int regno;
    char name[30];
    int percent;
};

int main() {
    struct Class s1;

    strcpy(s1.name, "Adarsh raj");

    s1.percent = 10;
    s1.regno = 21;

    printf("%s\t-%d\t-%d\n", s1.name, s1.percent,s1.regno);

    return 0;
}