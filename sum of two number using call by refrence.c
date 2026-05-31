//WAP to sum of two number using call by refrence
#include<stdio.h>
void sum(int *a, int *b);

int main()
{
   int a, b;

    sum(&a, &b);

    return 0;
}

void sum(int *a, int *b)
{
    int s;
    

    printf("Enter two numbers:\n");
    scanf("%d %d", a, b);

    s = *a + *b;

    printf("The sum = %d", s);
}
