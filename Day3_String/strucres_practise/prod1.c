#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to hold the product sales information
typedef struct {
    char product_ID[10];
    int total_sales_amount;
} Product;

// Function to compare two products based on total sales amount
int compareProducts(const void *a, const void *b) {
    Product *p1 = (Product *)a;
    Product *p2 = (Product *)b;
    return p2->total_sales_amount - p1->total_sales_amount;
}

int main() {
    // Create an array to store the product records
    Product products[100];
    int num_products = 0;

    // Accept multiple product records
    char line[20];
    while (fgets(line, sizeof(line), stdin)!= NULL) {
        char product_ID[10];
        int total_sales_amount;
        sscanf(line, "%[^-]-%d", product_ID, &total_sales_amount);
        int found = 0;
        for (int i = 0; i < num_products; i++) {
            if (strcmp(products[i].product_ID, product_ID) == 0) {
                if (total_sales_amount > products[i].total_sales_amount) {
                    products[i].total_sales_amount = total_sales_amount;
                }
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(products[num_products].product_ID, product_ID);
            products[num_products].total_sales_amount = total_sales_amount;
            num_products++;
        }
    }

    // Sort the product records in decreasing order of total sales amount
    qsort(products, num_products, sizeof(Product), compareProducts);

    // Print the product records
    printf("OUTPUT: \n");
    for (int i = 0; i < num_products; i++) {
        printf("%s-%d\n", products[i].product_ID, products[i].total_sales_amount);
    }

    return 0;
}
