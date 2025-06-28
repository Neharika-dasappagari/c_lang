#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	int num_3;
	float result;
	printf("enter the num_1 value:");
	scanf("%d",&num_1);
	printf("enter the num_2 value:");
	scanf("%d",&num_2);
	printf("enter the num_3 value:");
	scanf("%d",&num_3);
	result=(num_1/num_2)/num_3;
	printf("result is %f", result);
	return 0;
}
