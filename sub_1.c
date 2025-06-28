#include<stdio.h>
int main()
{
	int num_1;
	 int num_2;
	int num_3;
	int num_4;
	printf("enter the value num_1:");
	scanf("%d",&num_1);
	printf("enter the value of num_2:");
	scanf("%d",&num_2);
	printf("enter the value of num_3:");
	scanf("%d",&num_3);
	printf("enter the value of num_4:");
	scanf("%d",&num_4);
	int num_5=num_1-num_2-num_3-num_4;
	printf("num_1 value is %d\n",num_1);
	printf("num_2 value is %d\n",num_2);
	printf("num_3 value is %d\n",num_3);
	printf("num_4 value is %d\n",num_4);
	printf("num_1-nnum_2-num_3-num_4 %d", num_5);
	return 0;
}
	