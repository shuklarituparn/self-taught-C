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
    int i=0;
    while(string1[i]&&string2[i]!='\0'){
        if(string1[i]==string2[i]){
            return true;
        }
        else
            return false;

    }
}

/*
 * Currently this code has an issue of not incrementing i
 * if i declare ++i later it says unreachable code as the return statement makes the program exit before
 * I'll try to fix the problem by declaring the boolean flag and trying to change the value of the flag
 *
 */