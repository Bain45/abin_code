#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("\nEnter the two values:");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("\nAddition:%d",c);
}

