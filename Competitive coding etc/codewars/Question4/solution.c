//
// Created by rituparn on 14.02.23.
//

#include <stdio.h>


int checkingIsogram(char *array);

int main(){

    char string [50];
    printf("Enter a string: ");
    scanf("%s",string);

    printf("The string is isogram or not: %d", checkingIsogram(string));

}

int checkingIsogram(char *array){

    int count =0;
    for (size_t i = 0; i< sizeof(array)-1; ++i) {
        for (size_t j = 1; j< sizeof(array)-1; ++j) {
            printf("%c---i\n", array[i]);
            printf("%c---j\n", array[j]);
        }
    }
    return count;
}

/*
Weird output

Enter a string: abcde
a---i
b---j
a---i
c---j
a---i
d---j
a---i
e---j
a---i
---j
a---i
---j
b---i
b---j
b---i
c---j
b---i
d---j
b---i
e---j
b---i
---j
b---i
---j
c---i
b---j
c---i
c---j
c---i
d---j
c---i
e---j
c---i
---j
c---i
---j
d---i
b---j
d---i
c---j
d---i
d---j
d---i
e---j
d---i
---j
d---i
---j
e---i
b---j
e---i
c---j
e---i
d---j
e---i
e---j
e---i
---j
e---i
---j
---i
b---j
---i
c---j
---i
d---j
---i
e---j
---i
---j
---i
---j
---i
b---j
---i
c---j
---i
d---j
---i
e---j
---i
---j
---i
---j



*/