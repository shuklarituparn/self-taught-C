# include <stdio.h>

int main (int argc, char *argv[]){

    int numberofArguments= argc;
    char *argument1= argv[0];
    char *argument2= argv[1];

    printf("Number of Arguments is: %d\n", argc); //shows the number of arguments.
    printf("Argument1 is the program name: %s\n", argument1); // in this place will be "./name-of-program"
    printf("Argument2 is the command line argument: %s\n", argument2);// if we don't give any value after ./ it'll be empty

    return 0;




}