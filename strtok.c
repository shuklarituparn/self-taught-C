//
// Created by rituparn on 07.02.23.
//

# include <stdio.h>
# include <string.h>

int main (){
    char str[80]= "Hello how are you - this is - a c program"; //creating a char array
    const char s[2]= "-";  //delimiter. based on which we part our string
    char *token;

    token = strtok(str,s); //str= string to be tokenized, s= string containing all delimiters

    while(token!= NULL){
        printf("%s\n", token);
        token= strtok(NULL,s);

    }
    return 0;
}

/*
 output:

 Hello how are you
  this is
  a c program

 */