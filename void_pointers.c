//
// Created by rituparn on 20.02.23.
//

/*
 * Void pointers can store the adress of the variable of any data type
 *
 * void * is often used as the return type or parameter type
 *
 * void * doesn't know what kind of data it's pointing to, that's why it can't be dereferenced directly.
 *
 * to dereference it, need to explicitly cast to another pointer type
 */
#include <stdio.h>

int main(){

    int i=10;
    float f= 2.34;
    char ch= 'k';

    void *vPtr= NULL;
    vPtr = &i;
    printf("The value of i is :%d\n", *(int*)vPtr); //explictely casting to int*

    vPtr = &f;
    printf("The value of f is :%f\n", *(float*)vPtr); //explictely casting to float*

    vPtr = &ch;
    printf("The value of f is :%c\n", *(char *)vPtr); //explictely casting to char*

    return 0;

}

/*
 * After declaring one void pointer we were able to use in many time and with many data type just with
 * explicitly declaring it.
 */