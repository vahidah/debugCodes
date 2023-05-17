#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float* ptr1 = &arr[0];
    float* ptr2 = ptr1 + 3;
    printf("%f", *ptr2 - *ptr1);
    return 0;
}
// this program creates an array of floats *ptr1=12.5 and *ptr2=90.5=arr[3] and then prints arr[3]-arr[0]