/* table */

#include<stdio.h>
int main()
{
	int num,i,t;
	printf("enter value of num \n");
	scanf("%d",&num);
	for(i=1; i<=10; i++)
	{
		t=num*i;
		printf("%d \n", t);
	}
	return 0;
}
