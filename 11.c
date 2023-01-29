#include <stdio.h>
#include <string.h>

int check_func();
int check_func(){

    char Code_word[20];

    printf("Enter the Code word (Starts with D): ");

    scanf("%s", Code_word);

    if(strcmp(Code_word, "Damn")==0){

        return 0;
    }
    else if(strcmp(Code_word, "damn")==0){

        return 0;
    }
    else{

        return 1;
    }

}
int main(){

    if(check_func()==0){

        printf("Hello \n");
        return 0;
    }
    else{

     printf("Who are you( \n");
     return 1;
}

}