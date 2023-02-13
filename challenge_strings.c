//
// Created by rituparn on 13.02.23.
//

#include <stdio.h>
#include <stdbool.h>

int numOfChar(char *array); // Had to pass the pointer, earlier error passing just array without "*"
void concatenateStrings(char result[], const char *str1[], const char *str2[]);
int equalityOfStrings(char array1, char array2);

int main(){

    int userChoice;
    char array1 [50];
    char array2 [50];
    char result [120];
    printf("\n----------------------------------------xx--------------------------------\n");
    printf("Welcome to our program: Choose a function you want:\n");
    printf("Press 1: To count the number of character in a string\n");
    printf("Press 2 to concatenate two strings\n");
    printf("Press 3 to check if the strings are equal\n");

    scanf("%d", &userChoice);

    if( userChoice==1){
        printf("Enter the string you want to count the characters of: ");
        scanf("%s", array1);
        printf("The number of characters in the string is: %d", numOfChar(array1));
    }
    else if( userChoice==2){
        printf("Enter the first string you want to concatenate: ");
        scanf("%s", array1);
        printf("Enter the second string you want to concatenate: ");
        scanf("%s", array2);
        printf("The concatenated string is:");
        //concatenateStrings(result, array1,array2);

    }
    else if( userChoice==3){

    }
    else{

        return 1;
    }


    return 0;

}

int numOfChar(char *array){
    int count =0;
    int i=0;

    while((*array[i])!= EOF){
        count++;
        ++i;
    }
}