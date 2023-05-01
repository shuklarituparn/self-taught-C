//
// Created by rituparn on 30.04.23.
//

#include <stdio.h>
#include "Chains.h"

int hash(int key) {
    return key % 10;  //creating the hash code
}

void Insert(struct Node *HashTable[], int key) {
    int index = hash(key);
    SortedInsert(&HashTable[index], key);
}

int main() {
    struct Node *HashTable[10];
    struct Node *temp;
    int i;

    for (i = 0; i < 10; i++) {
        HashTable[i] = NULL;
    }

    Insert(HashTable, 12);
    Insert(HashTable, 22);
    Insert(HashTable, 42);

    temp = Search(HashTable[hash(12)], 12);

    if (temp != NULL) {
        printf("%d ", temp->data);
    } else {
        printf("Key not found\n");
    }

    return 0;
}
