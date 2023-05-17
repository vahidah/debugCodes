#include<stdio.h>
int main()
{
	int a;
	char *x;
	x = (char *)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);//print 513
	return 0;
}/*we have a int named a 
than we ++a and then print it*/
