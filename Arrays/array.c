/*
Author Name: Navaneeth M
Aray Operations
DOC: 24rd May 2024
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//#define SIZE INT_MAX

int main() 
{
	int n, temp;

	printf("Enter the size of array: \n");
	scanf("%d", &n);

	int a[n];

	printf("Enter the array values: \n");

	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	
	// Printing Array
	printf("Array values:\t");
	
	for(int i=0;i<n;i++)
		printf("%d\t", a[i]);
	
	printf("\n\n");

	//Reverse Printing	
	printf("Reverse Array values:\t");
	
	for(int i=n-1;i>=0;i--)
		printf("%d\t", a[i]);
	
	printf("\n\n");
	
	//Bubble Sort	
	printf("Bubble Sort:\t");
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
		
	
	printf("\n\n");


	return 0;
	
}
