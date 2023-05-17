#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3; // Point to arr[3]
    printf("%f", *ptr2 - *ptr1);
    return 0;
}  

// No bug found 
// The output : 70.0000(equal to 90.5 - 12.5)