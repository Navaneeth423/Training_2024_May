/*
 Author name: Navaneeth M
 Rotate elements right by k steps
 DOC: 28th May 2024
*/

#include<stdio.h>
//#include<string.h>
#include<stdlib.h>

int main()
{
	int n, k;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);

	int arr[n], arr1[n];

	printf("Enter the elements of the array: \n");
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	
	printf("Enter the number of steps to be rotated:\n");
	scanf("%d", &k);

	for(int i=0;i<n;i++) {
		if(i<k)
			arr1[i] = arr[n+i-k];
		else
			arr1[i] =  arr[i-k];
	}


	printf("\n");

	for(int i=0;i<n;i++)
		printf("%d ", arr1[i]);

	return 0; 



}
