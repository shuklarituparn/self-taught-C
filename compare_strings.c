//
// Created by rituparn on 15.02.23.
//

#include <stdio.h>
#include <stdbool.h>

bool compare_strings(const char *string1,const char *string2);

int main(){

    char str1[50]= {0};
    char str2[50]= {0};
    printf("Enter the string1: ");
    scanf("%s", str1);
    printf("Enter the string2: ");
    scanf("%s", str2);
    printf("The strings you entered are %s\n", str1);
    printf("The strings you entered are %s\n", str2);
    if(compare_strings(str1,str2)==true){
        printf("The strings are the same");
    }
    else
        printf("The strings are not the same");
    return 0;
}
bool compare_strings(const char *string1,const char *string2){
    bool flag= false; //made the flag to false
    int i=0;
    while(string1[i]&&string2[i]!='\0'){ //and operator checks both the strings
        if(string1[i]==string2[i]){    //if the string matches
            flag=true;        //changing the flag
        }
        else
            flag=false; //else returning the same value of the flag;
        ++i;
    }
    return flag;
}

/*
 * Finally fixed the problem.
 */