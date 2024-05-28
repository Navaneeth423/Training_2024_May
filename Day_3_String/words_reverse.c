/*
 Author name: Navaneeth M
 Reverse words in string
 DOC: 28th May 2024
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100];

	printf("Enter the string: \n");
	scanf("%[^\n]s", str);

	char *token = strtok(str, " ");

	while(token != NULL) {
		printf("%s ", strrev(token));
		token = strtok(NULL, " ");
	}


	return 0; 

}
