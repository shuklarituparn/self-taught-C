#include <stdio.h>

int main(){

    double hours, totaltax,finalPay;

    double tax1= 0.15*300;

    double tax2= 0.20;

    double tax3= 0.25;

    printf("Enter the amount of hours worked: ");
    scanf("%lf", &hours);
    printf("hours %lf", hours);

    if (hours> 40){

        double hours1= 1.5*hours;

        double salary = hours1* 12;

        if (salary >450){

            totaltax= tax1+tax2+ (salary-450)*tax3;
        }

        else {
            totaltax= tax1+tax2;
        }

       finalPay= salary- totaltax;
       printf("Your final salary is: %lf\n", finalPay );

    }

    else {

        double salary= hours*12;

        if (salary >450){

            totaltax= tax1+tax2+ (salary-450)*tax3;
        }

        else if (salary >300 && salary {
            totaltax= tax1+tax2;
        }

       finalPay= salary- totaltax;
       printf("Your final salary is: %lf\n", finalPay );
    }

}