//
// Created by rituparn on 20.02.23.
//

#include <stdio.h>

void copyString(char *to, char *from);
int main(void){

char string1[]= "a string to be copied";
char string2[50];
copyString(string2, string1);
printf("%s\n", string2);
}
void copyString(char *to, char *from){
    while(*from)
        *to++ =*from++;

    *to ='\0';
}
/*
 * Here we pass the array to the function copyStrings
 *
 * The statement  *from actually gives the element of the original array and we check if it is null terminator
 *
 * if not we increment the destination string and add the new element to that.
 *
 */