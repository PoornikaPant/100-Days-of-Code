//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, digits, divisor, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    divisor = 1;
    digits = n;

    while (digits >= 10) {
        digits = digits / 10;
        divisor = divisor * 10;
    }

    first = digits;

    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}