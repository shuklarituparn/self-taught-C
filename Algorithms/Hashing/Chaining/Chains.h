//
// Created by rituparn on 01.05.23.
//
#ifndef CHAINS_H
#define CHAINS_H

#include <stdlib.h>

struct Node { //Node for the linked list that we're creating here
    int data;  //data part of the linked list
    struct Node *next;  //pointer of the type struct that'll store the next address
};

void SortedInsert(struct Node **Head, int key) {
    struct Node *new_node, *q= NULL, *previous=*Head;
    new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data=key;
    new_node->next=NULL;

    if(*Head==NULL)
        *Head=new_node;
    else{
        while (previous&&previous->data<key){
            q=previous;
            previous=previous->next;
        }
        if(previous==*Head){
            new_node->next=*Head;
            *Head=new_node;
        }
        else{
            new_node->next=q->next;
            q->next=new_node;
        }
    }
}

struct Node *Search(struct Node *Head, int key) {
    while(Head!=NULL){
        if(key==Head->data){
            return Head;
        }
        Head=Head->next;
    }
    return NULL;
}

#endif // CHAINS_H