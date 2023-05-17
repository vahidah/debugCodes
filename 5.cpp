#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));//the output is 50
    printf("%c", (char)(*ptr2 - *ptr1));//the output is 2
    return 0;
}/*we have a array of 6 number,we have the first
 pointer that point to the first house of array and 
the second pointer that point the sixth house of array 
then we print the deference between the number that pointer
2 point and the number that pointer 1 point,then we print the 
fifth char of askii table*/