//WAP  to  print sum of two number using function
#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	printf("the sum=%d",sum(a,b));
	
}
int sum(int a,int b){
	int s;
	s=a+b;
	return s;
}
