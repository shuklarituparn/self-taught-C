//
// Created by rituparn on 20.02.23.
//

#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    char multiple []= "a string";
    char *p= multiple; //we don't have to use "&" as the name of array is the first address

    for ( i = 0; i < strlen(multiple); ++i) {

        printf("multiple [%d]= %c *(p+%d)= %c &multiple[%d]= %p p+%d=%p\n",i, multiple[i], i, *(p+i),i, &multiple[i],i, p+i);

        return 0;
        
    }
}