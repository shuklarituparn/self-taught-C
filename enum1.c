# include <stdio.h>
# include <string.h>

int main (){

    enum marks {marks1=100, marks2=87, marks3=99, marks4=10};


    printf("Welcome to the class of C: \n");

    printf("\n");

    printf("Enter your name for display of marks: ");

    char name[100];

    scanf("%s", name);

    //printf("%s", name); //

    int result1, result2, result3, result4;

    char str1[] = "anthony", str2[] = "john", str3[] = "anna", str4[]= "jacob";

    result1= strcmp(name, str1);

    result2= strcmp(name, str2);

    result3= strcmp(name, str3);

    result4= strcmp(name, str4);

    printf("\n");


    if (result1 ==0 ){

        printf(" Hello Anthony, your marks out of 100 is: %d \n ", marks1);
    }

    else if (result2 ==0 ){

        printf(" Hello John, your marks out of 100 is:  %d \n", marks2);
    }

    else if (result3 ==0 ){

        printf(" Hello Anna, your marks out of 100 is: %d \n", marks3);
    }

    else if (result4 ==0 ){

        printf(" Hello Jacob, your marks out of 100 is:  %d \n", marks4);
    }

printf("\n");

printf(" Folks, thats all for today \n");

return 0;
}