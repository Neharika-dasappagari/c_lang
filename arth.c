#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	

	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	c=a+b;
	printf("c value :%d\n",c);

	d=a-b;
	printf("d value :%d\n",d);
	
	e=a*b;
	printf("e value:%d\n",e);

	f=a/b;
	printf("f value :%d\n",f);
	
	g=a%b;
	printf("g value :%d\n",g);
	return 0;
}