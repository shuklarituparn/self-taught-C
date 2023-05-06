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
}*head=NULL;
void push(char x)
{
    struct Node *new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
        printf("stack is full\n");
    else
    {
        new_node->data=x; //storing the data that we want to push in the data section of our node
        new_node->next=head; //in the pointer section storing the location
        head=new_node; //moving the head to the next node
    }
}
char pop()
{
    struct Node *current;
    char x=-1;
    if(head==NULL)
        printf("Stack is Empty\n");
    else
    {
        current=head;
        head=head->next;
        x=current->data;
        free(current);
    }
    return x;
}
void Display()
{
    struct Node *current;
    current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
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
            if(head==NULL)
                return 0;
            pop();
        }
    }
    if(head==NULL)
        return 1;
    else
        return 0;
}int main()
{
    char *exp="((a+b)*(c-d)))";
    printf("%d ",isBalanced(exp));
    return 0;
}