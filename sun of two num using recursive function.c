//WAP to sum of two number using recursive function
#include<stdio.h>
int sum();
int main()
{
	int a,b;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	printf("sum=%d",sum(a,b));
	return 0;	
}
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}
