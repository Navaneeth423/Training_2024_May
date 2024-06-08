/*
 Author name: Navaneeth M
 Anagrams
 DOC: 28th May 2024
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str1[100], str2[100];
	printf("Enter the first string: \n");
	scanf("%s", str1);
	
	printf("Enter the second string: \n");
	scanf("%s", str2);

	if(strlen(str1) != strlen(str2)) {
		printf("The strings are not anagrams as lengths are different\n");
		return 0;
	}

	//Sort the strings
	char temp;

	int i, j;
	int n1 = strlen(str1), n2 = strlen(str2);
	
	for (i = 0; i < n1-1; i++) {
      		for (j = i+1; j < n1; j++) {
         		if (str1[i] > str1[j]) {
            			temp = str1[i];
            			str1[i] = str1[j];
            			str1[j] = temp;
         		}
      		}
   	}
	
	for (i = 0; i < n2-1; i++) {
      		for (j = i+1; j < n2; j++) {
         		if (str2[i] > str2[j]) {
            			temp = str2[i];
            			str2[i] = str2[j];
            			str2[j] = temp;
         		}
      		}
   	}

	puts(str1);
	puts(str2);

	int flag = 1;

	for(int i=0;i<strlen(str1);i++) {
		if(str1[i] == str2[i]) continue;
		else {
			flag = 0;
			break;
		}
	}

	if(flag == 1)
		printf("The strings are anagrams\n");
	else
		printf("THe strings are not anagrams\n");



	return 0; 

}
