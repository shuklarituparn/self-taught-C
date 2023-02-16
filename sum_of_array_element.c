//
// Created by rituparn on 16.02.23.
//

#include <stdio.h>

int sum( int *array, size_t length);

int main(){

    int array[10]={0};
    scanf("%d", array);
    printf("The sum is: %d",sum(array,10));
}

int sum( int *array, size_t length){
    int result=0;
    for (int i = 0; i < length; ++i) {

        result += array[i];
    }

}