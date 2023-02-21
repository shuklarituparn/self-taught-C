//
// Created by rituparn on 21.02.23.
//

#include <stdio.h>

int main(){
    struct employee{

        char name[6];
        int hireDate;
        float salary;
    };

    struct employee employee1={"john", 25, 34.5};
    struct employee employee2;
    printf("The enter the data of second employee:\n");
    printf("The name of the second employee: ");
    scanf("%s", employee2.name);
    printf("\nThe hiringDate of the second employee: ");
    scanf("%d", &employee2.hireDate);
    printf("\nThe Salary of the second employee: ");
    scanf("%f", &employee2.salary);

    printf("\n");
    printf("The employee name is: %s\n", employee1.name );
    printf("The employee hire data is: %d\n", employee1.hireDate );
    printf("The employee salary is: %f\n", employee1.salary);

    printf("\n");
    printf("The employee name is: %s\n", employee2.name );
    printf("The employee hire data is: %d\n", employee2.hireDate );
    printf("The employee salary is: %f\n", employee2.salary);

    return 0;
}