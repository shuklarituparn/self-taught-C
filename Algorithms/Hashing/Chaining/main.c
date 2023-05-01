//
// Created by rituparn on 30.04.23.
//

#include <stdio.h>
#include "Chains.h"

int hash(int key) {
    return key % 10;  //Returning the hash value of the key
}

void Insert(struct Node *HashTable[], int key) {   //takes array of pointer to the first node of each chain, and key
    int index = hash(key);//calculating the hash value
    SortedInsert(&HashTable[index], key); //then passes the address of head node of appropriate chain and key

}

int main() {
    struct Node *HashTable[10]; //creating hashtable of size 10 which array of pointer to the node
    struct Node *temp; //
    int i;

    for (i = 0; i < 10; i++) { //using a loop to initialize each element to NULL
        HashTable[i] = NULL;
    }

    Insert(HashTable, 12);
    Insert(HashTable, 22);
    Insert(HashTable, 42);

    temp = Search(HashTable[hash(12)], 12); //searching for our data

    if (temp != NULL) {
        printf("%d ", temp->data);
    } else {
        printf("Key not found\n");
    }

    return 0;
}
