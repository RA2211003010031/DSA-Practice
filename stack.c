#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

// int isFull();
// int isEmpty();

void pushStack();
void printStack();
void popStack();

int main()
{

    int size = 0;
    struct Stack *s1;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    pushStack(s1, size);
    printStack(s1, size);
    popStack(s1);
    printStack(s1, size);

    return 0;
}

void pushStack(struct Stack *s, int size)
{

    s->top = -1;

    s->arr = (int *)malloc(size * sizeof(int));

    // if (isFull)
    // {
    //     printf("STACK OVERFLOW");
    //     return;
    // }

    // else
    // {
        for (int i = 0; i < size; i++)
        {
            int val = 0;
            printf("Enter the value to put in STACK %d : ", i);
            scanf("%d", &val);

            s->top++;
            s->arr[s->top] = val;
        }
    // }
}

void printStack(struct Stack *s, int size)
{
    // if (isEmpty)
    // {
    //     printf("STACK UNDERFLOW");
    //     return;
    // }

    // else
    // {

        for (int i = 0; i < size; i++)
        {
            printf("Value at STACK %d : %d\n", i, s->arr[s->top]);
            s->top--;
        }
    // }
}

void popStack(struct Stack *s)
{
    // if (isEmpty)
    // {
        // printf("STACK UNDERFLOW");
    // }

    // else 
    // {
        
    // }
    
}