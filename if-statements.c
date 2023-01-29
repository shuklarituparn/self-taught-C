#include <stdio.h>

int main(){

 int x=90;

 int score= 80;

 if (score< x)
    printf("Low score\n");  //Simple if statements can be declared without brackets

 if (score< x){

    score++;
    printf("Score according to flow of commands: %d\n", score);
  }

  return 0;

}

/* For simple commands that are usually one line, they can be written without using brackets. But we need
to write it next to the condition or flow of the command breaks

For complex programs that are mutiple lines, we use braces to better arrange our program */


