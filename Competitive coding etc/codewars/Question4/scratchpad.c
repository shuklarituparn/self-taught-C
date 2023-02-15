//
// Created by rituparn on 15.02.23.
//
//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>
#include <stdbool.h>


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
        printf("The characters in the string are %c\n",array[i] );
    }
}
