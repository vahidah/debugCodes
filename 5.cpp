#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr; // Point to arr[0]
    int *ptr2 = arr + 5; // Point to arr[5]
    printf("%d\n", (*ptr2 - *ptr1)); // Print 50
    printf("%c", (char)(*ptr2 - *ptr1)); // Print '2'
    return 0;
}

// No bug found