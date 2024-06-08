/*
Author Name: Navaneeth M
Binary to Decimal
DOC: 23rd May 2024
*/

#include<stdio.h>
#include<math.h>

int main()
{
	long int n;
	long int copy_n;

	printf("Enter the binary number: \n");
	scanf("%ld", &n);

	copy_n = n;

	int rem;
	int dec = 0;
	int base=1;

	while(copy_n != 0) 
	{
		rem = copy_n % 10;
		
		copy_n /= 10;

		dec += rem * base;

		base *= 2;
	}	
	
	printf("%ld in binary is %d in binary\n", n, dec);
	

	return 0;
}
