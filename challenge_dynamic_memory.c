//
// Created by rituparn on 21.02.23.
/*
 * Challenge is to create a dynamic array and print the text;
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str= NULL;
    int x;

    printf("Enter the limit of string you want: ");
    scanf("%d", &x);
    str=(char *) malloc(x*(sizeof (char)));

    if(str!= NULL){
        printf("Enter the string you want: ");
        scanf("%s", str);
        printf("The string you entered is: %s",str);
    }
    else{
        printf("Memory allocation failed:");
        return 1;
    }
    free(str);
    return 0;
}