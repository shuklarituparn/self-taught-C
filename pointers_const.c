//
// Created by rituparn on 20.02.23.
//

#include<stdio.h>

int main(){
    int x=25;
    const int *pInt= &x; //constant pointer to the variable x. The address of pInt can't change.
    printf("The value of x is %d\n", x);
    printf("The value of pointer is %p\n", pInt);
    printf("The adress of variable is: %p\n", &x);
    x=35;
    printf("The new value of x is %d\n", x);
    printf("The value of pointer is %p\n", pInt);
    printf("The adress of variable is: %p\n", &x);

    return 0;
/*
 * Because of the const, the value where the pointer is pointing is not changed.
 *
 * However, we can change the value originally by modifying the original value of x
 *
 */
}