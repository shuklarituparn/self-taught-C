//
// Created by rituparn on 23.02.23.
//

/*
 * In this version of the program with the same name, gonna take malloc and calloc and use to store data
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char *str = NULL;
    FILE *fPtr;

    int size;
    printf("Enter the size of the string you wanna enter: ");
    scanf("%d", &size);
    str = ((char *) malloc(size * sizeof (char)));

    if (!str) {
        printf("Memory allocation unsuccessful! \n");
        return 1;
    }
    else if (!fPtr) {
        printf("Error in opening a file: ");
        return 1;
    }

    fPtr = fopen("New_file.txt", "w+");    //Can observe a new file created
    printf("Enter the data for the file named ");
    scanf("%s",str);
    fputs(str,fPtr);
    free(str);
    fclose(fPtr);

    return 0;
}

/*
 * Don't know why the fgets doesn't works just the scanf function takes the correct input and it is able to store it
 * in the file
 */