//
// Created by rituparn on 15.02.23.
//
//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int checkingIsogram(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    scanf("%s", string);
    checkingIsogram(string);

    //printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){
    for (int i = 0; array[i] != '\0'; ++i) {
        printf("The characters in the outer string are %c\n",array[i] ); //ok, finally correctly looping on the array
        for (int j = 0; array[j] != '\0'; ++j){
            printf("The characters in the inner loop are %c\n",array[j] );
        }
    }
}

/*
 * The problem in this loop is that it looks at the element in the array and then counts the duplicate element too
 *
 *for example: for a string with elements "abc" it counts a while the outer loop is at a or b when outer loop is at b
 */