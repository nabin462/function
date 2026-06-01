//WAP to find the factorial of given number using recursion function
#include<stdio.h>
int fact(int);
int main()
{
	int n ,f;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("fact=%d",fact(n));
	return 0;
}
int fact(int n){
	if(n==1)
	return 1;
	else
	return n*fact(n-1);

}
