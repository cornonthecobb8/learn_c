#include <stdio.h>
#include <stdbool.h> // needed for bools

int main() {

    // variables

    int age = 25; // you have to define your types for C
    int year = 2026;
    int quantity = 1;

    printf("You are %d years old\n", age); // format specifiers, formatted as ()"text text %identifier text text", variable)
    printf("The year is %d\n", year); // %d for integers
    printf("You have ordered %d item(s)\n", quantity);


    float gpa = 4.4;
    float price = 19.99; // floats only can store about 6 digits after the decimal point
    float temperature = -10.1;

    printf("Your gpa is %.1f\n", gpa); // %f for floats
    printf("The price is $%.2f\n", price); //you can choose how many decimal places after the . are printed by using %.(#ofplaces)(format identifier)
    printf("The temperature is %f degrees F\n", temperature);


    double pi = 3.14159265358979; // with double, you can store up to about 16 digits after the decimal
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi); // %lf for doubles, also the default is 6 printed after the decimal, so you have to specify if you want more
    printf("The value of e is %.15lf\n", e);


    char grade = 'A'; // when working with chars, you need to use singe quotes ''
    char symbol = '!';
    char currency = '$';

    printf("Your grade is an %c\n", grade);
    printf("Your favorite symbol is %c", symbol);
    printf("The currency is %c\n", currency);


    char name[] = "cornonthecobb8"; // in C, strings don't exist. Instead, you have to use an array of chars, formatted as: char variablename[] = "text"; Make sure to use double quotes
    char food[] = "pizza";
    char email[] = "email123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);


    bool isOnline = true; // true corresponds to 1, false corresponds to 0. You can use either or.

    printf("%d", isOnline); // prints one, if false prints zero

    return 0;
}