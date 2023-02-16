//
// Created by rituparn on 16.02.23.
//
#include <stdio.h>
#include <string.h>


int main(){
    //char temp[30]={0};
    //int result=0;
    char string1[20]={0};
    char string2[20]={0};
    //char string3[20]={0};
    printf("Enter the first string: ");
    scanf("%s",string1);
    printf("\nEnter the second string: ");
    scanf("%s", string2);
    //printf("\n Enter the third string: ");
    //scanf("%s",string3);
   if(strcmp(string1, string2)<0){
       printf("String 1 is lexically before of string 2");
   }
    if(strcmp(string1, string2)>0){
        printf("String 1 is lexically after of string 2");
    }
    if(strcmp(string1, string2)==0){
        printf("String 1 is lexically same as string 2");
    }


    return 0;




}