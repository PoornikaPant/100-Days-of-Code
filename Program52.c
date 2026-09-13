/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {

        if (i == 1)
            j = 4;
        else if (i == 2)
            j = 5;
        else if (i == 3)
            j = 3;
        else
            j = 1;

        while (j > 0) {
            printf("*\n");
            j--;
        }

        printf("\n");
    }

    return 0;
}