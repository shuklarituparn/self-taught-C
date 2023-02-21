//
// Created by rituparn on 21.02.23.
//
#include <stdio.h>
void swap(int x, int y);

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("The value before swapping: \n");
    printf("The first number: %d\n", a);
    printf("The first number: %d\n", b);

    swap(a,b);
    printf("The value after swapping: \n");
    printf("The first number: %d\n", a);
    printf("The second number: %d", b);

    return 0;
}
void swap(int x, int y){

    int temp;
    temp=x;
    x=y;
    y=temp;

    return;
}

/*
 * We can see that as we are passing by value the value of the variable is not changed for the main function
 */