#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	struct Sales sales[100];
	int pno = 0;

	printf("Enter the Prod ID and sales (PID-sales): (Ctrl+D to end)\n");

	char line[20];
	while(fgets(line, sizeof(line), stdin) != NULL) {
		char prod_id[10];
		int total_sales_amount;
		sscanf("%9[^-]-%d", prod_id, &total_sales_amount);
		int found = 0;
		for(int i=0;i<pno;i++) {
			if(strcmp(sales[i].pid, prod_id) == 0) {
				if(total_sales_amount > sales[i].total_sales_amount) {
					sales[i].total_sales_amount = total_sales_amount;
				}
				found = 1;
				break;
			}
		}
		if(!found) {
			strcpy(sales[pno].pid, prod_id);
			sales[pno].total_sales_amount = total_sales_amount;
			pno++;
		}
	}

	qsort(sales, pno, sizeof(struct Sales), compare);

	printf("OUTPUT: \n");
	for(int i=0;i<pno;i++) {
		printf("%s-%d", sales[i].pid, sales[i].total_sales_amount);
	}
	
	printf("\n\n");
	
	return 0;
}





	
