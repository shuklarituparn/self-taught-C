//
// Created by rituparn on 19.02.23.
//

/*
 * Create a variable with hard_coded value. Assign that variable-address to a pointer variable
 *
 * Display as output the address of the pointer, the value of the pointer, the value of what the pointer is pointing
 */

#include <stdio.h>

int main(){

    int x= 10; //variable with hard_coded value
    int *pInt= &x;
    printf("The address of the pointer is: %p\n", &pInt);
    printf("The value of the pointer is : %p", pInt);
    printf("The value of what the pointer is pointing to is: %d", *pInt);

    return 0;

}