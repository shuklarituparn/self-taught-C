//
// Created by rituparn on 15.02.23.
//
#include <stdio.h>

void concatenate(char *result, const char *string1, const char *string2);

int main(){

    char str1[50]= {0};
    char str2[50]= {0};
    char result[110]= {0};
    printf("Enter the string: ");
    scanf("%s", str1);
    printf("Enter the string: ");
    scanf("%s", str2);
    printf("The strings you entered are %s\n", str1);
    printf("The strings you entered are %s\n", str2);
    concatenate(result, str1, str2);
    return 0;
}
void concatenate(char *result, const char *string1, const char *string2){
    int i,j; //Had to declare the value of i, j outside as it'll help us concatenate
    for (i = 0; string1[i] !='\0'; ++i) {              //concatenating the first string
        result[i]=string1[i];
    }
    for (j = 0; string2[j]!='\0'; ++j) {       //concatenating the second string
        result[i + j] = string2[j];
    }

    result[i+j]='\0';// adding null character in the end


    printf("The result is: %s", result); //printing the result
}
