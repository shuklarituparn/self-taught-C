//
// Created by rituparn on 16.02.23.
//
#include <stddef.h>

int sum_array(const int *values, size_t count){
    int result=0;
    for(size_t i=0; i<count; ++i){
        result+=values[i];
    }
    return result;
}