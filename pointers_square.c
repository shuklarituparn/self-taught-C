//
// Created by rituparn on 20.02.23.
//

#include <stdio.h>
//#include <stdlib.h>

void square(int * x);

int main()
{
    int x;
    printf("The address of the variable x is %p: \n", &x);
    printf("Enter the number you want the square of: ");
    scanf("%d", &x);

    square(&x);
    printf("The square of the given number is %d\n", x);

    return 0;
}

void square(int * x) //pointer that stores the address of the variable
{
    printf("The *x is %p\n", x);

    *x = (*x) * (*x); //de-referencing the value stored at the location and using it to calculate square
}

/*
 * Here after initialization we get a location or an address of x and then we ask the user for the number at the
 * location or the address that we already declared.
 *
 * Then passing the address of the variable to the second function. After which we de-reference it and use to give
 * square
 *
 */