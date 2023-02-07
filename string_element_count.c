//
// Created by rituparn on 07.02.23.
//

#include<stdio.h>
#include <ctype.h>

int main(){
    char buff[100];
    int nLetters=0;
    int nDigits=0;
    int nPunct=0;

    printf("Enter a string of less than %d char: ", 100);
    scanf("%s", buff);

    int i=0;
    while(buff[i]){

        if(isalpha(buff[i]))
            ++nLetters;
        else if (isdigit(buff[i]))
            ++nDigits;
        else if(ispunct(buff[i]))
            ++nPunct;


    ++i;
    }

    printf("Your string has %d letters, %d digits, %d punctuations \n", nLetters, nDigits,nPunct);


}

