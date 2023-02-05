//
// Created by rituparn on 05.02.23.
//

//Some of the solution that I got to look at after submitting mine and really like

#include <stddef.h>

int find_odd (size_t length, const int array[length])
{
    int v=0;
    int*p=array;
    while(length--)v^=*p++;
    return v;
}