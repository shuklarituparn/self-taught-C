//
// Created by rituparn on 16.02.23.
//

#include <stddef.h>

int sum_array(const int *values, size_t count){
    int ret = 0;
    while(count--){
        ret+=values[count];
    }
    return ret;
};

/*
 * In this solution I like how he is using the while loop in place of using a for loop.
 *
 * Kinda more elegent, in my opinion
 */