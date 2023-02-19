//
// Created by rituparn on 19.02.23.
//
#include<stdio.h>
#include <ctype.h>

void print(char *string);

int main(){
    char str[] = "aBcDe";
    print(str);
}

void print( char *string){
    for (int i = 0; string[i]!='\0' ; ++i) {
        for (int j = 0; j <=i; ++j) {
            if(j==0 && i!=0){
                printf("-");
                printf("%c", toupper(string[i]));
            }
            else if(j==0){
                //printf("-");
                printf("%c", toupper(string[i]));
            }
            else
                printf("%c", tolower(string[i]));

        }
    }

}