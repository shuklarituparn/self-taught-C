
//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


int checkingIsogram(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    fgets(string, 50, stdin);
    //scanf("%s", string);
    //checkingIsogram(string);

    printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){
    int count=0;

    for (int i = 0; array[i] != '\0'; ++i) {
        for (int j = 0; array[j] != '\0'; ++j){
            if(i!=j){
                if(tolower(array[i])== tolower(array[j])){
                    count++;
                }
                else if (array[0]==' '){
                    count=0;
                }
                else
                    continue;

            }

            //printf("The characters in the inner loop are %c\n",array[j] );
        }

    }
    if (count>0){
        return false;
    }
    else
        return true;

}

/*
final log: Finally using the fgets() function. I am able to take the space as input and do it with count.
           With the scanf() it was not counting the spaces, which is a necessary condition for testing in codewars
 */