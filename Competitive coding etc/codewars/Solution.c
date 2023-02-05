//
// Created by rituparn on 04.02.23.
//
#include <stddef.h>
#include <stdio.h>

int main()
{

    int array[13]= {20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5};

    for (int i= 0; i<=12; ++i){
        int counter=0;
        for (size_t j=0; j<=12; ++j){
            if(array[i]==array[j]){
                counter++;
                //printf("%d*", counter);
            }
        }
        if(counter %2==0){
            continue;
        }
        else{
            return array[i];
        }
    }
    return 0;
}