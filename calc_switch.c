/* calculator using switch case */

#include<stdio.h>
int main()
{
	int ch;
	int a,b;
	printf("Enter your choice \n 1.Addition\n 2.Substraction\n 3.Product\n 4.Division\n");
	scanf("%d",&ch);

	switch(ch)
	{
case 1:
		printf("Enter value of a: \n");
		scanf("%d\n",&a);
		printf("Enter value of b: \n");
		scanf("%d\n",&b);
		printf("Addition is %d\n",a+b);	
		break;
case 2:
		printf("Enter value of a: \n");
		scanf("%d\n",&a);
		printf("Enter value of b: \n");
		scanf("%d\n",&b);
		printf("Substraction is %d\n",a-b);
		break;
case 3:
		printf("Enter value of a: \n");
		scanf("%d\n",&a);
		printf("Enter value of b: \n");
		scanf("%d\n",&b);
		printf("Product is %d\n",a*b);
		break;
case 4:
		printf("Enter value of a: \n");
		scanf("%d\n",&a);
		printf("Enter value of b: \n");
		scanf("%d\n",&b);
		if(a<b){
			printf("Division is %d\n",b/a);
		}
		else{
			printf("These numbers cannot be divide \n");
		}
		break;
default:
		printf("Enter valid numbers!\n");
	}
	return 0;
}

