//
// Created by rituparn on 16.02.23.
//
#include <stdio.h>
#include <string.h>

void printStrings(char *array);
int main(){
    char temp[30]={0};
    //int result=0;
    char string1[20]={0};
    char string2[20]={0};
    char string3[20]={0};
    printf("Enter the first string: ");
    scanf("%s",string1);
    printf("\nEnter the second string: ");
    scanf("%s", string2);
    printf("\n Enter the third string: ");
    scanf("%s",string3);

    if(strcmp(string1, string2)>0){
        strcpy(temp, string1);
        strcpy(string1,string2);
        strcpy(string2, temp);
    }
    else if(strcmp(string2, string3)>0){
        strcpy(temp, string2);
        strcpy(string2,string3);
        strcpy(string3, temp);
    }
    printStrings(string1);
    printStrings(string2);
    printStrings(string3);

    return 0;
}

void printStrings(char *array){
    int i=0;
    while(array[i]!='\0'){
        printf("%c",array[i]);

    ++i;
    }
    printf("\n");
}