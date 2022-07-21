// grade and percantage of a student 

#include<stdio.h>
int main()
{
	float marks;
	printf("enter your marks\n");
	scanf("%f",&marks);
	if (marks>=60){
		printf("you got A grade");
	}
	else if (marks>=50){
		printf("you got B grade");
	}
	else if (marks>=40){
		printf("you got C grade");
	}
	else{
		printf("you are fail");
	}
	return 0;
}
