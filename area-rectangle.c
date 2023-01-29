# include <stdio.h>
#include  <stdlib.h>

int main(int argc, char * argv[]){

   int length= atoi(argv[1]); //this function is defined in stdlib
   int breadth= atoi(argv[2]);

   printf("The length of the rectangle is: %d \n", length);
   printf("The breadth of the rectangle is: %d \n", breadth);

   int area = 2*length + breadth;

   printf("The area of the rectangle is: %d \n", area);

   return 0;






}