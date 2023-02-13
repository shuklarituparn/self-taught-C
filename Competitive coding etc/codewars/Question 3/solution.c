//
// Created by rituparn on 10.02.23.
//

#include <stdio.h>
int main(){

    int num=5986537;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<10; ++i){
        if(num>0){

            int mod = num % 10;
            arr[i]= mod;//split last digit from number
            num = num / 10;    //divide num by 10. num /= 10 also a valid one

        }

        printf("%d", arr[i]);
    }


}