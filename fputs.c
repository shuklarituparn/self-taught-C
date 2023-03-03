//
// Created by rituparn on 23.02.23.
//

#include<stdio.h>
#include<stdlib.h>


int main (){

    FILE *fPtr;
    char str[80];
    if((fPtr= fopen("New_file.txt","w"))==NULL){
        printf("Error in opening file: \n");
        return 1;
    }
    printf("Enter the text\n");
    printf("To stop entering, press Ctrl+d/Ctrl+z\n");

}