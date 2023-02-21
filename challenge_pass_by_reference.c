//
// Created by rituparn on 21.02.23.
//

#include <stdio.h>

int squaringInt(int *x);

int main (){
    int x;
    printf("Enter the number, you want to square: ");
    scanf("%d",&x);
    printf("The square is: %d\n", squaringInt(&x));
}

int squaringInt(int *x){
    return *x *= *x;
}