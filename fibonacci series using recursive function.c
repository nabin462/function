//WAP to display fibonacci series up to n term using recursive function
#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("the fibonacci series\n");
	for(i=0;i<=n;i++){
	
	printf("%d\n",fib(i));
  }
  return 0;

}
int fib(int n){
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else
	
	{
		return fib(n-1)+fib(n-2);
	}
}
