/* biggest of three numbers */

#include<stdio.h>

int main()
{
	int n1,n2,n3;
	printf("Enter value of n1\n");
	scanf("%d",&n1);
	printf("Enter value of n2\n");
	scanf("%d",&n2);
	printf("Enter value of n3\n");
	scanf("%d",&n3);
	if (n1>n2 && n1>n3){
		printf("n1 is biggest no.");
	}
	else if(n2>n1 && n2>n3){
		printf("n2 is biggest no.");
	}
	else{
		printf("n3 is biggest no.");
	}
	return 0;
}
