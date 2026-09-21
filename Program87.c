//Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(!((str[i] >= 'a' && str[i] <= 'z') ||
                  (str[i] >= 'A' && str[i] <= 'Z') ||
                  str[i] == '\n'))
        {
            special++;
        }
    }

    printf("Number of spaces = %d\n", spaces);
    printf("Number of digits = %d\n", digits);
    printf("Number of special characters = %d", special);

    return 0;
}