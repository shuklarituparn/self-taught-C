//
// Created by rituparn on 01.05.23.
//
#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

int hash(int key) {// The hash function that returns the hash value after putting the key
    return key % TABLE_SIZE;
}

int hash2(int key) {   //second hash function that takes a key and return the hash value
    return 7 - (key % 7);
}

void insert(int table[], int key) {  //The insert function that inserts an element into the hash table
    int index = hash(key);  //first we get the first hash value that helps us to know where to place the first element
    int step = hash2(key);  //we use the second hash function to calculate the step that we need to move to the next position
    int i = 1; //the loop variable

    while (table[index] != 0) {  //while the index is not equal to zero
        index = (index + step) % TABLE_SIZE; //we calculate the position where our element is supposed to go
        i++;  //incrementing the loop variable
        if (i == TABLE_SIZE) {    //if the table is full then print that table is full and we can't store no more
            printf("Table is full\n");
            return;
        }
    }

    table[index] = key; //otherwise store the key in the index
}

int search(int table[], int key) { //search function
    int index = hash(key); //calculating the index
    int step = hash2(key); //calculating the step
    int i = 1;

    while (table[index] != key) { //looping through the table
        index = (index + step) % TABLE_SIZE;
        i++;
        if (table[index] == 0 || i == TABLE_SIZE) {
            return -1;
        }
    }

    return index;  //returning the index if the element is found
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