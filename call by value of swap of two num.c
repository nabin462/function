//WAP to display the swap of two number using call by value
#include<stdio.h>
void swap();
int main()
{
	swap();
	return 0;
}
void swap(){
	int a=90,b=76;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swap is a=%d \t b=%d",a,b);
}
