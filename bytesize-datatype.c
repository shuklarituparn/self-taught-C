#include <stdio.h>

int main (){


   printf("Size of int data type : %zd\n",sizeof(int));
   printf("Size of char data type : %zd\n",sizeof(char));
   printf("Size of float data type : %zd\n",sizeof(float));
   printf("Size of long data type : %zd\n",sizeof(long));
   printf("Size of long long data type : %zd\n",sizeof(long long int));
   printf("Size of double data type : %zd\n",sizeof(double));
   printf("Size of long double data type : %zd\n",sizeof(long double));
   return 0;






/* Regarding the size of long and long long showing 8

The C standard does not require long long to be 16 bytes or to be wider than long.

In C 2018 5.2.4.2.1 1, the standard requires long long to be able to represent numbers from
−(263−1) to +(263−1). That requires at least 64 bits, so a long long must be at least 8 8-bit bytes
(or, for example, 4 16-bit bytes). It is optional for a C implementation to make long long wider and support
a larger range.

In 6.3.1.1 1, the standard requires the rank of long long (also known as long long int) to be greater
than the rank of long. Due to the definition of “rank,” this means long long must have at least as much
precision as long. (The precision of an integer type is the number of bits used to represent the value,
not including the sign bit.) The standard does not require long long to have more precision than long;
it can be equal.*/


}