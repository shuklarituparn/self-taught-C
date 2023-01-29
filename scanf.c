/* This program deals with scanning of code and then doing output on it*/

/* While using Scanf(), we should note something.

1. Scanf() returns the number of items that it succesfully reads

2. If using scanf() for reading value of one of basic variable type, precede the variable name with an '&'

3. If using scanf() for reading a string into character array, don't use a '&'

4. The scanf() function uses whitespaces (newlines, spaces,tabs ) to decide how to divide into the seperate field.

5. Scanf() is the opposite is the inverse of printf() which converts strings,character into text to be displayed on screen */

// START OF PROGRAM

# include <stdio.h>

int main (){

     char str[100];
     int i;

     printf(" Enter a value: ");
     scanf("%s %d", str, &i);  // here the character is readed from left to right

     printf("\n You Entered: %s %d", str, i );
     printf("\n");

     return 0;



}

/* As we can see from the input that the code here accepts the string and integers and then show them on the screen
in their pre determined place. If we place the character in the place of the integer then we get '0' as there
is no integer. Point to note from this program is we had to first define 'i'. and the character array. Also, in the
character array the program accepts the numerical value but inverse is not acceptable */

/* After using scanf() program pauses and waits for the reply of a user. After the user presses the enter button
the program proceeds

Scanf() expects the input int the same format as they are declared in the code. For example if in the code the user
declared them as '%s' and '%d' then the program expects the input in the format of 'String Integer' */

