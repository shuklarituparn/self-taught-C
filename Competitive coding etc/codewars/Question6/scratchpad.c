//
// Created by rituparn on 19.02.23.
//
#include<stdio.h>
#include <ctype.h>

void print(char *string);

int main(){
    char str[] = "RqaEzty";
    print(str);
}

void print( char *string){
    for (int i = 0; string[i]!='\0' ; ++i) {
        for (int j = 0; j <=i; ++j) {

            //printf("%c", string[i]);
            printf("The value of I: %d\n", i);
            printf("The value of J: %d\n", j);


        }
    }

}