//WAP to find the greater among three number
#include<stdio.h>
void greater();
int main()
{
 greater();
return 0;

	
}
void greater(){
	int a,b,c;
	printf("enter the three number\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greater\n",a);
		
	}
	else if(b>a&&b>c)
	{
		printf("%d is greater\n",b);
	}
	else
	{
		printf("%d is greater\n",c);
	}
	
}
