//wap to find the simple interest using function
#include<stdio.h>
void si(int ,int,int);
int main(){
	si(4000,5,6);
	return 0;
}
void si(int p,int r,int t){
	int s;
	s=(p*t*r)/100;
	printf("simple interest=%d",s);
	
}
