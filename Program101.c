//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    /* Find first occurrence */
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            first = i;
            break;
        }
    }

    /* Find last occurrence */
    for(i = n - 1; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            last = i;
            break;
        }
    }

    if(first == -1)
    {
        printf("-1, -1");
    }
    else
    {
        printf("First occurrence = %d\n", nums[first]);
        printf("Last occurrence = %d\n", nums[last]);
        printf("Index of first occurrence = %d\n", first);
        printf("Index of last occurrence = %d", last);
    }

    return 0;
}