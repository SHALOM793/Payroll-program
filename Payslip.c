/*
    Project: Payroll program
    Author:  Kinyua Shalom Njiru
    Compiler: GCC
    License: MIT
    Date: 25/10/2021
    Language: C99
*/
#include <stdio.h>
#include<stdlib.h>

int main(){
    //variable declaration
    char name[100], pin[10];
    int emp_num, hours;
    int normal_pay;
    float overtime_pay, tax, gross, net;
    const int rate = 1000;

    //introduce the program
    printf("\t Gitonga's factory payroll \n");

    //capture the inputs
    printf("Employee name: ");
    gets(name);
    printf("KRA pin: ");
    gets(pin);
    printf("Employment Number: ");
    scanf("%d", &emp_num);
    printf("Hours worked:");
    scanf("%d", &hours);

    //computation
    if (hours > 40)
    {
        normal_pay = rate * 40;
        overtime_pay = (hours - 40) * 1.5 * rate;
    }
    else {
        normal_pay = rate * hours;
        overtime_pay = 0;
    }
    gross = normal_pay + overtime_pay;
    tax = 0.16 * gross;
    net = gross - tax;

    //output the results
    printf("Employee Name: %s\n", name);
    printf("Employee No: %d\n", emp_num);
    printf("Normal Pay: %d\n", normal_pay);
    printf("Overtime Pay: %.2f\n", overtime_pay);
    printf("Gross income: %.2f\n", gross);
    printf("Tax: %.2f\n", tax);
    printf("Net: %.2f\n", net);

    return 0;
}
