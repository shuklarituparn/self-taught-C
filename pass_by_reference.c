//
// Created by rituparn on 21.02.23.
//

/*
 * Passing data in the function is done either by pass by data or pass by reference. When we pass by data,
 * we just copy the value in the function and do operation on them. This doesn't changes the original value
 *
 */
#include <stdio.h>
void swap(int *x, int *y);

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("The value before swapping: \n");
    printf("The first number: %d\n", a);
    printf("The first number: %d\n", b);

    swap(&a,&b); //passing the address of the variable
    printf("The value after swapping: \n");
    printf("The first number: %d\n", a);
    printf("The second number: %d\n", b);

    return 0;
}
void swap(int *x, int *y){

    int temp;
    temp= *x;
    *x=*y;
    *y=temp;

    return;
}

/*
 * We can see that as we are passing by reference the value of the variable is changed for the main function
 */