//
// Created by rituparn on 16.02.23.
//
#include <stdio.h>
#include <string.h>

void reverseStrings(char *array);
int main(){

    char string1[20]={0};
    printf("Enter the first string: ");
    scanf("%s",string1);
    reverseStrings(string1);
    return 0;
}

void reverseStrings(char *array){
    int x= strlen(array);
    while(x>=0){
        printf("%c", array[x]);

    --x;
    }
}