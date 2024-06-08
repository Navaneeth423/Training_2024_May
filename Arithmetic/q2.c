
/*
Author Name: Navaneeth M
Area and circumference of Circle
DOC: 23rd May 2024
*/

#include<stdio.h>
#define PI 3.14

int main() 
{
	float r;
	float circumf;
	float area;
	
	printf("Enter radius of circle: \n");
	scanf("%f", &r);
	
	area = PI * r * r;
	circumf = 2 * PI * r;

	printf("Circumference = %f\n", circumf);
	printf("Area = %f\n", area);

	return 0;
	
}
