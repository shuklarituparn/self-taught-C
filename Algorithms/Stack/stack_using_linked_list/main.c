//Implement the Stack using Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;  //declaring the head of the Node
void push(int element)
{
    struct Node *new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
        printf("stack is full\n");
    else
    {
        new_node->data=element;
        new_node->next=head;
        head=new_node;
    }
}
int pop()
{
    struct Node *new_node;
    int x=-1;
    if(head==NULL)
        printf("Stack is Empty\n");
    else
    {
        new_node=head;head=head->next;
        x=new_node->data;
        free(new_node);
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
int main()
{
    push(10);
    push(20);
    push(30);
    Display();
    printf("%d ",pop());
    return 0;
}