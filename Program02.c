//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum = %f\n", num1 + num2);
    printf("Difference = %f\n", num1 - num2);
    printf("Product = %f\n", num1 * num2);

    if (num2 != 0)
        printf("Quotient = %f\n", num1 / num2);
    else
        printf("Quotient = Cannot divide by zero\n");

    return 0;
}