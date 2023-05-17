#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    printf("%f", *ptr2 - *ptr1);
    return 0;
}/*this program first build a float_array contain of 
5 memberes and then we have pointer1 that have the address 
of the first house of array and the second pointer that have the
address of the fourth house of array and then we print the defference
between the tow number that these these two pointers point to and the output is 78*/