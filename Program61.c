//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}