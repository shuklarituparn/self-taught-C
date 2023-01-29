#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){

    if (argc <= 1){
        printf("Please Enter more arguments \n");
        exit(1);
    }

  int seconds = atoi(argv[1]);
  printf("The amount of seconds you entered is: %d \n", seconds);
  double minutes= seconds/60;
  printf("The amount of minutes are: %f \n", minutes);
  double hours= minutes/60;
  printf("The amount of hours are: %f \n", hours);
  double days= hours/24;
  printf("The amount of days are: %f \n", days);
  double month= days/30;
  printf("The amount of months are: %f \n", month);

  return 0;


 }
