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
    printf("The value of the pointer is : %p\n", pInt);
    printf("The address of the variable is : %p\n", &x);
    printf("The value of what the pointer is pointing to is: %d\n", *pInt);

    /*
     * We can see that the value that the pointer is holding is just the address of the variable
     */


    return 0;

}