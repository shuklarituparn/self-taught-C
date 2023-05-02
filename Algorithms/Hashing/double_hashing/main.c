//
// Created by rituparn on 01.05.23.
//
#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

int hash(int key) {
    return key % TABLE_SIZE;
}

int hash2(int key) {
    return 7 - (key % 7);
}

void insert(int table[], int key) {
    int index = hash(key);
    int step = hash2(key);
    int i = 1;

    while (table[index] != 0) {
        index = (index + step) % TABLE_SIZE;
        i++;
        if (i == TABLE_SIZE) {
            printf("Table is full\n");
            return;
        }
    }

    table[index] = key;
}

int search(int table[], int key) {
    int index = hash(key);
    int step = hash2(key);
    int i = 1;

    while (table[index] != key) {
        index = (index + step) % TABLE_SIZE;
        i++;
        if (table[index] == 0 || i == TABLE_SIZE) {
            return -1;
        }
    }

    return index;
}

int main() {
    int table[TABLE_SIZE] = {0};

    insert(table, 12);
    insert(table, 22);
    insert(table, 32);
    insert(table, 42);

    int index = search(table, 22);
    if (index == -1) {
        printf("Key not found\n");
    } else {
        printf("Key found at index %d\n", index);
    }

    return 0;
}
/*
 * Double hashing is a technique used for collision resolution in hash tables. In double hashing, a second hash function
 * is used to calculate the step size between probes in case of a collision. The step size is calculated as the result
 * of the second hash function applied to the key, and it is added to the current index to find the next index to probe.
 *
 * hash() function is used to calculate the initial index for the given key, and hash2() function is used to calculate
 * the step size for probing. The insert() function inserts the key into the hash table using double hashing for
 * collision resolution, and the search() function searches for the key in the hash table using the same technique.
 * If the key is found, the function returns the index of the key in the table, otherwise it returns -1.
 */