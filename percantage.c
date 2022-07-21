// grade and marks of a student

#include<stdio.h>
int main()
{
	float hindi;
	float english;
	float maths;
	float physics;
	float chemistry;
	float total_marks;
	printf("enter your marks of Hindi\n");
	scanf("%f",&hindi);
	printf("enter your marks of English\n");
	scanf("%f",&english);
	printf("enter your marks of Maths\n");
	scanf("%f",&maths);
	printf("enter your marks of Physics\n");
	scanf("%f",&physics);
	printf("enter your marks of Chemistry\n");
	scanf("%f",&chemistry);
	total_marks=(hindi+english+maths+physics+chemistry)/500*100;
	printf("total marks obtained %f\n percante", total_marks);
	if (total_marks>=100){
		printf("you got A+ grade\n");
	}
	else if (total_marks>=80){
		printf("you got A grade\n");
	}
	else if (total_marks>=60){
		printf("you got B+ grade\n");
	}
	else if (total_marks>=50){
		printf("you got B grade\n");
	}
	else if (total_marks>=45){
		printf("you got C grade\n");
	}
	else{
		printf("you are fail\n");
	}
	return 0;
}	
