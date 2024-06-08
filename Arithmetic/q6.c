/*
Author Name: Navaneeth M
Largest of three numbers
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	int a;
	int b;
	int c;

	printf("Enter the three numbers: \n");
	scanf("%d%d%d", &a, &b, &c);

	if(a>b && a>c)
		printf("%d is the largest\n", a);
	else if(b>c)		
		printf("%d is the largest\n", b);
	else
		printf("%d is the largest\n", c);

	return 0;	
}
