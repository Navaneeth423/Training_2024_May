/*
Author Name: Navaneeth M
Celsius to Fahrenheit
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	float temp_c;
	float temp_f;

	printf("Enter the tempreature in Celsius: \n");
	scanf("%f", &temp_c);

	temp_f = (temp_c * 1.8) + 32;

	printf("The temperature in Fahrenheit is %f\n", temp_f);

	return 0;
}
