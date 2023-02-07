//
// Created by rituparn on 07.02.23.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char text[100];
    char substring[40];

    printf("Enter the string to be searched (limit: %d char): ", 100);
    scanf("%s\n",text);

    printf("Enter the string sought (limit: %d char): ", 40);
    scanf("%s\n ",substring);

    printf("\n first string entered is: \n%s\n", text);
    printf("\n second string entered is: \n%s\n", substring);

    //converting it to uppercase

    for (int i=0;(text[i]=(char)toupper(text[i]))!='\0'; ++i);
    for (int i=0;(substring[i]=(char)toupper(substring[i]))!='\0'; ++i);

    printf("The second string %s found in the first \n", ((strstr(text,substring)==NULL)? "was not": "was"));

    return 0;

}