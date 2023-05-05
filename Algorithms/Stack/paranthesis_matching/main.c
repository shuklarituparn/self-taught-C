//
// Created by rituparn on 05.05.23.
//

// Parenthesis matching. This program will check if the parenthesis are balanced or not. Meaning for every opening
//bracket do we have a close bracket or not.
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    char data;
    struct Node *next;
}*top=NULL;
void push(char x)
{
    struct Node *new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
        printf("stack is full\n");
    else
    {
        new_node->data=x;
        new_node->next=top;
        top=new_node;
    }
}
char pop()
{
    struct Node *t;
    char x=-1;
    if(top==NULL)
        printf("Stack is Empty\n");
    else
    {
        t=top;
        top=top->next;x=t->data;
        free(t);
    }
    return x;
}
void Display()
{
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
}int main()
{
    char *exp="((a+b)*(c-d)))";
    printf("%d ",isBalanced(exp));
    return 0;
}