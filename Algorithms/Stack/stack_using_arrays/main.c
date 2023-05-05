//Implementation of stack using Arrays

//Declaring and passsing the stack as stak. so as to avoid confusion

#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    int *data;
};
void create(struct Stack *stak)
{
    printf("Enter Size");
    scanf("%d",&stak->size);
    stak->top=-1;
    stak->data=(int *)malloc(stak->size*sizeof(int));
}
void Display(struct Stack stak)
{
    int i;
    for(i=stak.top;i>=0;i--)
        printf("%d ",stak.data[i]);
    printf("\n");
}
void push(struct Stack *stak,int element)
{
    if(stak->top==stak->size-1)
        printf("Stack overflow\n");
    else
    {
        stak->top++;
        stak->data[stak->top]=element;
    }}
int pop(struct Stack *stak)
{
    int x=-1;
    if(stak->top==-1)
        printf("Stack Underflow\n");
    else
    {
        x=stak->data[stak->top--];
    }
    return x;
}
int peek(struct Stack stak,int index)
{
    int x=-1;
    if(stak.top-index+1<0)
        printf("Invalid Index \n");
    x=stak.data[stak.top-index+1];
    return x;
}
int isEmpty(struct Stack stak)
{
    if(stak.top==-1)
        return 1;
    return 0;
}
int isFull(struct Stack stak)
{
    return stak.top==stak.size-1;
}
int stackTop(struct Stack stak)
{
    if(!isEmpty(stak))return stak.data[stak.top];
    return -1;
}
int main()
{
    struct Stack stak;
    create(&stak);
    push(&stak,10);
    push(&stak,20);
    push(&stak,30);
    push(&stak,40);
    printf("%d \n",peek(stak,2));
    Display(stak);
    return 0;
}