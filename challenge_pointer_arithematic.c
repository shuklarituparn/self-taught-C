//
// Created by rituparn on 21.02.23.
//

#include <stdio.h>
int count_char(const char *string);
int main(){
    char string[50];
    printf("Enter your string: ");
    scanf("%s",string);
    printf("The number of characters in the string are: %d", count_char(string));
}
int count_char(const char *string){
    const char *pChar= string;
    while(*string){
        *string++;
    }
    return string-pChar;
}