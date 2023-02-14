//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>


int checkingIsogram(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    scanf("%s",string);

    printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){


    for (size_t i = 0; i< sizeof(array); ++i) {
        int count =0;
        for (size_t j = 1; j< sizeof(array); ++j) {
            if(array[i]==array[j]){
                count=1;
            }
        }
    }
    return
}