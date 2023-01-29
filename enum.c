# include <stdio.h>

int main (){

  enum gender {Male, female};

  enum gender myGender;

  myGender= Male;

  printf(" My gender is : %d \n", myGender); //as we can see the enum only returns integers and as MALE is-
                                             // -position 0 the value printed is 0

  printf(" My gender is : %u \n", myGender);

  printf(" My gender is : %c \n", myGender);



  return 0;




}