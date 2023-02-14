//
// Created by rituparn on 14.02.23.
//
#include <stdio.h>


int numberOfcharacter(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    scanf("%s",string);

    printf("The number of characters in the string is: ");
    printf("%d", numberOfcharacter(string));

}

int numberOfcharacter(char *array){

    int count=0;
    //const size_t x= sizeof(array);
    for(int i=0; array[i]!= '\0'; ++i){
        for (int j = 1; array[j]!= '\0'; ++j) {
            if(array[i]== array[j]){
                printf("Matching element found: ");
            }
            else{
                printf("Matching element not found");
            }

        }
        //printf("%c", array[i]);
        count++;
    }
    return count;
}