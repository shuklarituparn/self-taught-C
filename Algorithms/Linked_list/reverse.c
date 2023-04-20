//
// Created by rituparn on 03.04.23.
//
#include<stdio.h>
#include<stdlib.h>   //for the malloc

struct Node
{
    char data;
    struct Node *next;
}*head=NULL;

void create(int n){

    char data [10];
    int num=n;
    struct Node *t, *last;
    for (int i = 0; i < num; ++i) {
        printf("Enter the element %d:", i+1 );
        scanf("%c",data);
        struct Node *new_node= (struct Node*) malloc(sizeof (struct Node));//allocating a new space on the memory
        new_node->data=data[i];
        new_node->next=NULL;

        if(head==NULL){
            head=new_node;
            last=new_node;

        }
        else{
            head=new_node;
            head->next=new_node;
            new_node->next=new_node;
            last=new_node;
        }

    }
}


int main(){

    create(5);



}