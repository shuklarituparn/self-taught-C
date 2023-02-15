//
// Created by rituparn on 15.02.23.
//
//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


int checkingIsogram(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    scanf("%s", string);
    //checkingIsogram(string);

    printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){
    int count =0;

    for (int i = 0; array[i] != '\0'; ++i) {
        for (int j = 0; array[j] != '\0'; ++j){
            if(i!=j){
                if(tolower(array[i])== tolower(array[j])){
                    count++;
                }
                else
                    continue;

            }

            //printf("The characters in the inner loop are %c\n",array[j] );
        }

    }
    return count;
}

/*
 * The problem in this loop is that it looks at the element in the array and then counts the duplicate element too
 *
 *for example: for a string with elements "abc" it counts a while the outer loop is at a or b when outer loop is at b
 */