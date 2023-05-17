#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	++*p;//first ++p and then *p
	p += 2;//arr[0]+2
	printf("%d", *p);//the output is 3
	return 0;
}