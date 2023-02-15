//
// Created by rituparn on 15.02.23.
//
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
    scanf("%s", string);
    //checkingIsogram(string);

    printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){
    bool flag= false;

    for (int i = 0; array[i] != '\0'; ++i) {
        for (int j = 0; array[j] != '\0'; ++j){
            if(i!=j){
                if(tolower(array[i])!= tolower(array[j])){
                    flag=true;
                }
                else
                    continue;

            }

            //printf("The characters in the inner loop are %c\n",array[j] );
        }

    }
    return flag;
}

/*
I don't know why I can't solve it using a bool flag. It works good with the count. But everytime I try to declare
 a flag I get error in final solution
 */