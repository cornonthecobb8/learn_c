#include <stdio.h>

int main() {

    int age = 16;
    float price = 19.99;
    double pi = 3.145926535;
    char currency = '$';
    char name[] = "cornonthecobb8";

    printf("%d\n", age); 
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%3d\n", num1); // you can specify the minimum width for a statement to take up
    printf("%-3d\n", num2); // you can also left justify
    printf("%3d\n", num3);
    printf("%0d\n", num1); // you can also make the width filled by 0s instead of spaces
    printf("%+d\n", num2); // you can use the + to make it display whether the number is positive or negative
    printf("%+d\n", num3);

    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.1f\n", price1); // when you specify the # of decimals following the ., it will round 
    printf("%+7.2f\n", price2); // you can combine multiple format specifier parts
    printf("%.1f\n", price3);


    return 0;
}