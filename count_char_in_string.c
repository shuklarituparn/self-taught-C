//
// Created by rituparn on 10.02.23.
//

#include <stdio.h>

int numOfChar(char *str);

int main(){

    char str[50]= {0};
    printf("Enter the string: ");
    scanf("%s", str);
    printf("The string you entered is %s\n", str);
    printf("The number of characters in string is: %d", numOfChar(str));

    return 0;
}
int numOfChar(char *str){
    int count =0;
    for (int i = 0; str[i]!='\0' ; ++i) {
        count++;
    }
return count;
}