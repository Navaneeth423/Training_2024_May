
/*
 Author name: Navaneeth M
 Remove duplicate characters in string
 DOC: 28th May 2024
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[20];

	printf("Enter the string: \n");
	scanf("%s", str);

	printf("String without duplicate characters: \n");
	
	/*for(int i=0;i<strlen(str);i++) {
		for(int j=i+1;str[j] != '\0';j++) {
			if(str[j]==str[i]) {
				for(int k=j;str[k] != '\0'; k++) {
					str[k] = str[k+1];
				}
			}
		}
	}*/

	int index=0;

	for(int i=0;i<strlen(str);i++) {
		int j;
		for(j=0;j<strlen(str);j++) {
			if(str[j]==str[i]) break;
		}
		if(j==i) str[index++] = str[i];
	
	}
	str[index] = '\0';

	puts(str);	


	return 0; 

}
