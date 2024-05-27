/*
Author Name: Navaneeth M
Odd or Even
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	int num;

	printf("Enter the number: \n");
	scanf("%d", &num);

	if(num%2)
		printf("%d is odd\n", num);
	else
		printf("%d is even\n", num);

	return 0;	
}
