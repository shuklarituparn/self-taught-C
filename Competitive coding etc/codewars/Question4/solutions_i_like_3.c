//
// Created by rituparn on 15.02.23.
//
#include <stdbool.h>
#include <stdlib.h>


bool IsIsogram(char *str) {
    size_t aux[ 'z'-'a' ] = {0};

    while(*str)
        if (aux[*str++ - 'a']++) return false;

    return true;
}