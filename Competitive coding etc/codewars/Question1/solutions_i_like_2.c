//
// Created by rituparn on 05.02.23.
//


//Some of the solution that I got to look at after submitting mine and really like

#include <stddef.h>

int find_odd (size_t length, const int array[length])
{
    int odd_int = 0;

    for (size_t i = 0; i < length; i++)
        odd_int ^= array[i];

    return odd_int;
}