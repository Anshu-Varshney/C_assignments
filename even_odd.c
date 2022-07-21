// check number is even or odd

#include<stdio.h>
int main()
{
	int num;
	printf("enter value of num\n");
	scanf("%d",&num);
	if (num%2==0){
		printf("entered number is even\n");
	}
	else{
		printf("entered number is odd\n");
	}
	return 0;
}
