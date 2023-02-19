//
// Created by rituparn on 19.02.23.
//
#include<stdio.h>

void print(char *string);

int main(){
    char str[] = "RqaEzty";
    print(str);
}

void print( char *string){
    for (int i = 0; string[i]!='\0' ; ++i) {
        printf("%c", string[i]);
    }

}