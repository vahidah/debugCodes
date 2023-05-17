#include<stdio.h>
const char * f(const char **p) {//this fuction get char ** 
	auto q = (p + sizeof(char))[1];//move the pointer forward one house and then again move it forward one house
	return q;
}
int main() {
	const char * str[] = { "Wish","You","Best",":D" };
	printf("%c%c ", *f(str), *(f(str) + 1));//the *f(str)==B , the f(str)+1 the address of the house B and *(f(str)+1)==e  the result is Be 
	printf("%c%c%c%c\n", **str, *(*(str + 1) + 1), *((str + 2)[-1] + 1), **&*(&str[-1] + 1));/***str==w ,*(str + 1)=the address of the house of "you"
	*(*(str + 1) + 1)==O ,*((str + 2)[-1] + 1)==o , **&*(&str[-1] + 1)==w the result is woow*/


	
}
