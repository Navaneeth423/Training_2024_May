/*
 Author name: Navaneeth M
 Finding the duplicate elements
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
	int hash[10000] = {0};
	printf("Enter the array elements: \n");
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);

	for(int i=0;i<n;i++) {
		++hash[arr[i]];
	}

	printf("The duplicate integers are:\n");
	
	for(int i=0;i<n;i++) {
		if(hash[arr[i]] > 1) {
			hash[arr[i]] = 0;
			printf("%d\n", arr[i]);
		}
	}

	return 0; 



}
