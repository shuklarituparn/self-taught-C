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
    const char *pChar= string;  //storing the first address of the array
    while(*string){    //checking if the de-referenced string is the null terminator
        string++;   //incrementing the string
    }
    return string-pChar;    //subtracting the end address from the beginning to give the size of the string
}