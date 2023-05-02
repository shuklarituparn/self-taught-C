//
// Created by rituparn on 01.05.23.
//
#include <stdio.h>
#define SIZE 10

int hash(int key) { //hash function that returns the hash val
    return key % SIZE;
}

int probe(int H[], int key) {  //Probe function that helps us find the next place available where we can place an element
    int index = hash(key);
    int i = 0;
    while (H[(index + i * i) % SIZE] != 0) {
        i++;
    }
    return (index + i * i) % SIZE;
}

void insert(int H[], int key) {
    int index = hash(key);
    if (H[index] != 0) {
        index = probe(H, key);
    }
    H[index] = key;
}

int search(int H[], int key) {
    int index = hash(key);
    int i = 0;
    while (H[(index + i * i) % SIZE] != key) {
        i++;
    }
    return (index + i * i) % SIZE;
}

int main() {
    int HT[SIZE] = {0};
    insert(HT, 12);
    insert(HT, 25);
    insert(HT, 35);
    insert(HT, 26);
    printf("\nKey found at %d\n", search(HT, 35));
    return 0;
}

/*
 * Quadratic probing is a technique used to resolve collision in hash tables. It uses a quadratic function to determine
 * the next available slot in the hash table. The formula for quadratic probing is (hash(key) + i^2) % size, where i
 * is the number of times the probing has occurred.
 */