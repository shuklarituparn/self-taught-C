//
// Created by rituparn on 20.02.23.
//

#include <stdio.h>
//#include <stdlib.h>

void square(int * x);

int main()
{
    int x;
    printf("Enter the number you want the square of: ");
    scanf("%d", &x);

    square(&x);
    printf("The square of the given number is %d\n", x);

    return 0;
}

void square(int * x)
{
    *x = (*x) * (*x);
}
