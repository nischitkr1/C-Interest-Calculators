// compound interest calculator
#include <stdio.h>
#include <math.h>

int main()
{
    // variables to store values in float
    float principal, rate, time, interest;
    // print a message as title of the program
    printf("Compound Interest Calculator\n");
    // input a float value as principal amount from the user
    printf("Enter Principal: ");
    // store the value in 'principal' variable
    scanf("%f", &principal);
    // input a float value as interest rate from the user
    printf("Enter Rate of Interest: ");
    // store the value in 'rate' variable
    scanf("%f", &rate);
    // input a float value as time period from the user
    printf("Enter Time Period: ");
    // store the value in 'time' variable
    scanf("%f", &time);
    // define 'interest' variable as the formula of compound interest
    interest = principal * pow((1 + rate / 100), time) - principal;
    // print the value of 'principal' variable as the principal amount
    printf("Principal: %f\n", principal);
    // print the value of 'interest' variable as the interest amount
    printf("Total Interest: %f\n", interest);
    // print the sum of the values of 'principal' and 'interest' variable as the total amount
    printf("Total Amount: %f\n", principal + interest);
    return 0;
}
