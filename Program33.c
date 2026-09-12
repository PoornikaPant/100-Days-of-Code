//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Calculate the sum of powers of digits
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("The number is an Armstrong number.");
    } else {
        printf("The number is not an Armstrong number.");
    }

    return 0;
}