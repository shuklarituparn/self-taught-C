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

void SortedInsert(struct Node **Head, int key) {  //**H pointer to the head of the linked list, key to be inserted
    struct Node *new_node, *previous= NULL, *current=*Head;
    new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data=key;
    new_node->next=NULL;

    if(*Head==NULL)
        *Head=new_node;
    else{
        while (current&&current->data<key){
            previous=current;
            current=current->next;
        }
        if(current==*Head){
            new_node->next=*Head;
            *Head=new_node;
        }
        else{
            new_node->next=previous->next;
            previous->next=new_node;
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
/*
 * The search function takes two argument. A pointer to the head of the list and the key. It then traverses the
 * list till it finds the element, if it does find it, it returns the pointer to that element, or it returns the nullptr
 */
#endif // CHAINS_H