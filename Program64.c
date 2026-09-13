//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    int max = 0, answer = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            answer = i;
        }
    }

    printf("Digit occurring most times = %d", answer);

    return 0;
}