/* eligibility for vote */

#include<stdio.h>
int main()
{
	int age;
	printf("enter value of age\n");
	scanf("%d",&age);
	if (age>=18){
		printf("you are eligible for vote\n");
	}
	else{
		printf("you are not eligible for vote\n");
	}
	return 0;
}
