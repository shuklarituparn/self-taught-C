//
// Created by rituparn on 15.02.23.
//

#include <stdbool.h>


bool IsIsogram(char *str)
{
    char    letters[26] = { 0 };

    while  (*str && !letters[(*str | ' ') - 'a']++)
        ++str;
    return !*str;
}