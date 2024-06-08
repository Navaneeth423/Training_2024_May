/*
 Author Name: Navaneeth M
 Structure for products
 DOC: 28th May 2024
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

	
struct Sales
{
	char pid[10];
	int total_sales_amount;
};


int compare(const void* a, const void* b) 
{
	struct Sales *prodA = (struct Sales *) a;
	struct Sales *prodB = (struct Sales *) b;
	return prodB->total_sales_amount - prodA->total_sales_amount;
}

int main()
{
	int n;
	printf("Enter number of products: \n");
	scanf("%d", &n);

	struct Sales products[n];

	printf("Enter product details: \n");
	for(int i=0;i<n;i++)
		scanf("%9[^-]-%d", products[i].pid, &products[i].total_sales_amount);
	
	/*for(int i=0;i<n;i++) {
		int max_sales = products[i].total_sales_amount;
		for(int j=i+1;j<n;j++) {
			if(strcmp(products[i].pid, products[j].pid) == 0 && products[j].total_sales_amount > max_sales) {
				struct Sales temp = products[i];
				products[i] = products[j];
				products[j] = temp;
			}
		}
	}*/

	qsort(products, n, sizeof(struct Sales), compare);

	printf("\nThe output is : \n");
	/*for(int i=0;i<n;i++) {
		if(i==0 || strcmp(products[i].pid, products[i-1].pid) != 0) {
			printf("%s-%d", products[i].pid, products[i].total_sales_amount);
		}
	}*/

	inr num_product = 0;

	char last_product[10] = "";

	for(int i=0;i<n;i++) {
		if(strcmp(products[i].pid, last_product) != 0) {
			printf("%s-%d", products[i].pid, products[i].total_sales_amount);
			strcpy(last_product, products[i].pid);
		}
	}


	printf("\n");

	return 0;

}
