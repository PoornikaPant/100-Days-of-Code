//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month == 4)
    {
        printf("New date format: %02d-Apr-%04d", day, year);
    }
    else
    {
        printf("Invalid month. Please enter 04 for April.");
    }

    return 0;
}