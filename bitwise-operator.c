// C Program to demonstrate use of bitwise operators
#include <stdio.h>

int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b); //Logical AND
	printf("a&b = %d\n", a & b);

	// The result is 00001101
	printf("a|b = %d\n", a | b); //Logical OR

	// The result is 00001100
	printf("a^b = %d\n", a ^ b); //XOR (result=1 if both bits are different)

	// The result is 11111010
	printf("~a = %d\n", a = ~a); //Logical NOT (result=1 if the bit under consideration is 0)

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);  //Shifting to left. The number after the sign decides the places to shift

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1); //Shifting to right. Basically same thing as the above

	return 0;

}
