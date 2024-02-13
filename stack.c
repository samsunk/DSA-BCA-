#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// defining a stack template
struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack Stack;

// creating a Empty stack
void createEmptyStack(Stack *s)
{
    s->top = -1;
}

// check the stack is empty
int isEmpty(Stack *s)
{
    if ((s->top) == -1)
        return 1;
    else
        return 0;
}

// check the stack is full
int isFull(Stack *s)
{
    if ((s->top) == MAX - 1)
        return 1;
    else
        return 0;
}

// inserting the element into the stack
void push(Stack *s, int newitem)
{
    if (isFull(s))
    {
        printf("\n The stack is full! sorry bhaiya !!");
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
}

// removing the element from the stack
void pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("\n Bhaiya Stack khali xa hou!!!");
    }
    else
    {
        printf("\n Your deleted items is %d", s->items[s->top]);
        s->top--;
    }
}

// displaying the element of the stack
void show(Stack *s)
{
    int i;

    for (i = 0; i <= s->top; i++)
    {
        printf("%d\t", s->items[i]);
    }
    printf("\n");
}

void main()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    createEmptyStack(s);
    push(s, 5);
    push(s, 6);
    push(s, 8);
    push(s, 3);
    printf("\n now displaying the content of stack:\n");
    show(s);
    printf("\n Poppoig the element");
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    
    printf("\n now displaying the content of stack after popping:\n");
    show(s);
}