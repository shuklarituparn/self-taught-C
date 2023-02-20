//
// Created by rituparn on 20.02.23.
//

#include <stdio.h>
int arraySum(int array[],const int n);
void main(void){

int values[10]={-2,-1,-9,7,6,8,9,4,5,7};

printf("The sum of the array is:%i\n ", arraySum(values, 10));

}

int arraySum(int array[],const int n){ //passing the array and the size as parameters

    int sum=0, *ptr; //declaring the sum to be zero, and declaring a pointer
    int *const arrayEnd=array+n; //const pointer to the end of the array

    for(ptr=array;ptr<arrayEnd;++ptr){ //for loop to loop till array end reached
        sum+=*ptr; //adding the values

    }
    return sum; //returning the values
}