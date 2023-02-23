//
// Created by rituparn on 23.02.23.
//

/*
 * Create a file, and open a file
 */

#include <stdio.h>

int main(){

    FILE *fPtr;

    char str[20];

    if(!fPtr){
        printf("Error in opening a file: ");
        return 1;
    }
    fPtr=fopen("New_file.txt","w+");    //Can observe a new file created
    printf("Enter the data for the file named ");

    fgets(str, 20, stdin);
    fputs(str, fPtr);
    fclose(fPtr);

    return 0;
}

/*
 * Can actually write to the file but it has a limit which is hard-coded in to the program and need to be hard-coded
 *
 * Will try with malloc(), and calloc()
 */

//As we can see that it deletes the data that was in the file before and writes a new one in it's place