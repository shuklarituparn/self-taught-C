//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>
#include <stdbool.h>


int checkingIsogram(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    scanf("%s",string);
    //checkingIsogram(string);

   printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){

    for (size_t i = 0; array[i] !='\0'; ++i) {
        //int count =0;
        //printf("%c---i\n", array[i]);
        for (size_t j = 1; array[j]  != '\0'; ++j) {
            if(array[i]==array[j]){
                return false;
            }
            else
                return true;
        }
    }
    //printf("count %d", count1);
}
