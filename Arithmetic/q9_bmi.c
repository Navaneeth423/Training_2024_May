/*
Author Name: Navaneeth M
BMI
DOC: 23rd May 2024
*/

#include<stdio.h>

int main() 
{
	float wt;
	float ht;
	float bmi;

	printf("Enter wt(in kg) & ht(in meters): \n");
	scanf("%f%f", &wt, &ht);

	bmi = wt / (wt*wt);

	if(bmi>=30)
		printf("BMI = %f. Obesity\n", bmi);
	else if(bmi>=25)
		printf("BMI = %f. Overweight\n", bmi);
	else if(bmi>=18.5)
		printf("BMI = %f. Normal weight\n", bmi);
	else
		printf("BMI = %f. Underweight\n", bmi);
	

	return 0;	
}
