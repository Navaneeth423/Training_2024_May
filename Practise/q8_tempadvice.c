/*
Author Name: Navaneeth M
Temperature Advice
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	float temp;

	printf("Enter temperature: \n");
	scanf("%f", &temp);

	if(temp>=30)
		printf("It's hot outside, stay hydrated!\n");
	else if(temp>=20)
		printf("The weather is nice and warm.\n");
	else if(temp>=10)
		printf("It's a bit chilly, wear a jacket.\n");
	else
		printf("It's cold outside, stay warm!\n");


	return 0;	
}
