/*
Author Name: Navaneeth M
Grade system
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	int marks;

	printf("Enter the marks: \n");
	scanf("%d", &marks);

	if(marks>=90)
		printf("You got A grade\n");
	else if(marks>=80)
		printf("You got B grade\n");
	else if(marks>=70)
		printf("You got C grade\n");
	else if(marks>=60)
		printf("You got D grade\n");
	else
		printf("You got F grade\n");


	return 0;	
}
