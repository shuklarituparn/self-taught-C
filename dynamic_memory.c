//
// Created by rituparn on 21.02.23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str; //declaring a char pointer named char

    str= (char*) malloc(15); //initially allotting the memory. saving of the address of the new memory

    if(!str){
        printf("Memory allocation failed for some reason"); //handling the case when allocation failed
        return 1;   //terminating the program
    }
    strcpy(str,"hello");

    printf("The string is: %s, and the address is: %p\n", str,str);


    //reallocating the memory

    str= (char*) realloc(str,25); //first argument is pointer of original string, second is size
    strcat(str, ".com");
    printf("The string is: %s, and the address is: %p\n", str,str);

    free(str); //here str is the pointer that we're using to free the memory

    return 0;
}