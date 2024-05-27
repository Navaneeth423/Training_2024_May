/*
Author Name: Navaneeth M
Calculator
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	int n,m;
	char opr;
	
	printf("Enter two numbers: \n");
	scanf("%d%d", &m, &n);

	scanf("%c",&opr);
	
	printf("Enter which operation to perform(+,-,*,/): \n");
	scanf("%c", &opr);

	if(opr == '+')
		printf("Addition: %d\n",m+n);
	else if(opr == '-')
		printf("Subtraction: %d\n",m-n);
	else if(opr == '*')
		printf("Multiplcation: %d\n",m*n);
	else if(opr == '/')
		printf("Division: %d\n",m/n);
	else
		printf("Enter valid operator!!!\n");

	return 0;
	
}
