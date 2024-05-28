/*
 Author name: Navaneeth M
 Missing number in array
 DOC: 28th May 2024
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;

	printf("Enter the size of the array: \n");
	scanf("%d", &n);

	int arr[n];
	
	printf("Enter the elements of the array: \n");
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);

	int x1 = arr[0], x2=1;
	for(int i=1;i<n;i++)
		x1 = x1 ^ arr[i];

	for(int i=2;i<=n+1;i++)
		x2 = x2 ^ i;

	printf("%d\n", x1);
	printf("%d\n", x2);
	
	printf("The missing number is : %d\n", x1^x2);



	return 0; 

}
