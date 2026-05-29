//WAP to find the factorial of given number using function
#include<stdio.h>
void factorial();
int main()
{
	factorial();
	return 0;
}
void factorial(){
	int n,fact=1,i;
	printf("enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factriol of given number is %d",fact);
	
}
