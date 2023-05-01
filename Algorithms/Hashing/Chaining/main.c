//
// Created by rituparn on 30.04.23.
//

#include <stdio.h>
#include "Chains.h"

int hash(int key) {
    return key % 10;
}

void Insert(struct Node *H[], int key) {
    int index = hash(key);
    SortedInsert(&H[index], key);
}

int main() {
    struct Node *HT[10];
    struct Node *temp;
    int i;

    for (i = 0; i < 10; i++) {
        HT[i] = NULL;
    }

    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);

    temp = Search(HT[hash(12)], 12);

    if (temp != NULL) {
        printf("%d ", temp->data);
    } else {
        printf("Key not found\n");
    }

    return 0;
}
