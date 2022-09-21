#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

/*-------------structures section-------------*/

typedef struct{
    int code;
    char name[50];
    int quantity;
    float price;
}Product;

typedef struct{
    int code;
    char name[50];
    float priceTTC;
    float totalP;
    int soldCount;
    int date[3];
    int time[2];
}history;



/*-------------global variables section-------------*/

int i;
int bookCounter = 0;
int counter = 0;
history histor[MAX];
Product product[MAX];
int totalPiecesPurchased = 0;
Product temp[1];

/*-------------functions section-------------*/

void newProduct();
void displayProducts();
void sortProducts();
void buyProduct();
void search();
void storage();
void deleteProduct();
void registerBook();
void salesStatistics();
float totalPrice();
float averagePrice();
float maxPrice();
float minPrice();
/*-------------the main function-------------*/

int main()
{
    int choice;
    int q;
    do{
        //system("cls");
        printf("\n--------MENU--------\n");
        printf("\n1. Add new product");
        printf("\n2. Display products");
        printf("\n3. buy product");
        printf("\n4. Search");
        printf("\n5. Storage");
        printf("\n6. Delete");
        printf("\n7. Register book");
        printf("\n8. Sales Statistics");
        printf("\n0. Exist");

        printf("\n\nEnter your choice: "); scanf("%d",&choice);

        switch(choice){
            case 1:
                newProduct();
                system("cls");
                break;
            case 2:
            	
                displayProducts();
                printf("\n1. sort product");
                printf("\n2. back to menu\n");
                do{
                    scanf("%d", &q);
                    if(q==1) sortProducts();
                    else if(q==2) break;
                    else printf("\nSomething went wrong. Please try again\n");
                }while(q!=1 && q!=2);
                printf("\n\nPress any key to continue.");
                system("cls");
                break;
            case 3:
            	
                buyProduct();
                break; 
            case 4:
                search();
                break;
            case 5:
            	system("cls");
                storage();
                
                break;
                case 6:
                
                deleteProduct();
                break; 
             case 7:
             	system("cls");
                registerBook();
                break;
            case 8:
            	system("cls");
                salesStatistics();
                
                break;
            default:
                if(choice!=0) printf("\nSomething went wrong. Please try again\n");
                break;
        }

    }while(choice!=0);

    return 0;
}

/*-------------functions-------------*/

void newProduct(){
    system ("cls");
    int n;

    do{
        printf("How many products you want to add?\n"); scanf("%d", &n);
        if(n<1 || n>100) printf("Something went wrong. Please try again\n\n");
    }while(n<1 || n>100);

    for(i=0; i<n; i++){
        printf("______________________________________________________________");
        printf("\n\nEnter the following informations of the product number %d\n\n", i+1);
        printf("Enter the code of product: "); scanf("%d", &product[counter].code);
        printf("Enter the name of product: "); scanf("%s", &product[counter].name);
        printf("Enter the quantity of product: "); scanf("%d", &product[counter].quantity);
        printf("Enter the price of product: "); scanf("%f", &product[counter].price);
        counter++;
    }
}


void displayProducts(){
    system("cls");
    printf("\t \t \t \t ALL PRODUCTS  \n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("Serial Number  |  Name  |  Code  |  Quantity  |    Price    |  Price including TTC \n");
    printf("-----------------------------------------------------------------------------------\n");
    for(i = 0; i<counter; i++){
    printf("      %d       |   %s   |   %d   |     %d     |    %.2f dh  |     %.2f dh\n", i+1, product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price+(product[i].price*0.15));
    printf("==========================================================================================\n");
    }
}


  void sortProducts(){
    system("cls");
    int choice;
    int s, j;

    printf("\n1. sort products in ascending alphabetical order of name.\n");
    printf("2. sort products in descending order of price.\n");
    do {
        printf("enter your choice: "); scanf("%d", &choice);

        if(choice == 1){
            for(i=0; i<counter; i++){
                for(j=i+1; j<counter; j++){
                    if(strcmp(product[i].name, product[j].name)>0){
                        temp[0] = product[i];
                        product[i] = product[j];
                        product[j] = temp[0];
                    }
                }
            }
            printf("\n\n\n\t \t sort products in descending order of price.  \n");
            printf("-----------------------------------------------------------------------------------\n");
            printf("Serial Number  |  Name  |  Code  |  Quantity  |    Price    |  Price including TTC \n");
            printf("-----------------------------------------------------------------------------------\n");
            for(i = 0; i<counter; i++){
            printf("      %d       |   %s   |   %d   |     %d     |    %.2f dh  |     %.2f dh\n", i+1, product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price+(product[i].price*0.15));
            printf("==========================================================================================\n");
            }
        } else if(choice == 2){
            for(i=0; i<counter; i++){
                for(j=i+1; j<counter; j++){
                    if(product[i].price<product[j].price){
                        temp[0] = product[i];
                        product[i] = product[j];
                        product[j] = temp[0];
                    }
                }
            }
            printf("\n\n\n\t \t products in ascending alphabetical order of name  \n");
            printf("-----------------------------------------------------------------------------------\n");
            printf("Serial Number  |  Name  |  Code  |  Quantity  |    Price    |  Price including TTC \n");
            printf("-----------------------------------------------------------------------------------\n");
            for(i = 0; i<counter; i++){
            printf("      %d       |   %s   |   %d   |     %d     |    %.2f dh  |     %.2f dh\n", i+1, product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price+(product[i].price*0.15));
            printf("==========================================================================================\n");
            }
        } else printf("Something went wrong. Please try again\n");
    } while(choice!=1 && choice!=2);
}  


void search(){
    system("cls");
    int w, s;
    printf("1. search by code\n");
    printf("2. search by quantity\n\n");
    do{
        scanf("%d", &w);
        if(w!=1 && w!=2) printf("Something went wrong. Please try again\n");
    }while(w!=1 && w!=2);

    if(w==1){
        system("cls");
        printf("enter the code: "); scanf("%d", &s);
        for(i=0; i<counter; i++)
            if(s == product[i].code)
			 printf(" name:   %s   | code:   %d   | quantity:   %d     | price:   %.2f dh  | Price including TTC:   %.2f dh\n", product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price+(product[i].price*0.15));
    }else{
        system("cls");
        printf("enter the quantity: "); scanf("%d", &s);
        for(i=0; i<counter; i++)
            if(s == product[i].quantity)
			 printf(" name:   %s   | code:   %d   | quantity:   %d     | price:   %.2f dh  | Price including TTC:   %.2f dh\n", product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price+(product[i].price*0.15));
    }
}

   void storage(){
    int t=0;
    for(i=0; i<counter; i++){
        if(product[i].quantity<3){
            printf("\nthe products whose quantity is less than 3:\n");
            printf(" name:   %s   | code:   %d   | quantity:   %d     | price:   %.2f dh  | Price including TTC:   %.2f dh\n", product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price+(product[i].price*0.15));
            t=1;
        }
    }
    if(t==0) printf("there's no products that whose quantity is less than 3");
}

void buyProduct(){
    int c, oldQuantity, soldCount;
    int t=0;
    system("cls");
    printf("\n\n\n \t \t \t \t \tenter the code of product: "); scanf("%d", &c);
    for(i=0; i<counter; i++){
        if(product[i].code == c){
            printf("\n \t \t \t \tname: %s  | price including TTC: %.2f  | quantity: %d\n", product[i].name,product[i].price+(product[i].price*0.15), product[i].quantity);
            t=1;
            break;
        }
    }
    if(t==1){
        oldQuantity = product[i].quantity;
        printf("\n \t \t \t \tenter the new quantity of product: "); scanf("%d", &product[i].quantity);
        if(oldQuantity>product[i].quantity){
            printf("\n \t \t \t \tenter the current date of selling:\n");
            printf(" \t \t \t \tthe day: "); scanf("%d", &histor[bookCounter].date[0]);
            printf(" \t \t \t \tthe mounth: "); scanf("%d", &histor[bookCounter].date[1]);
            printf(" \t \t \t \tthe year: "); scanf("%d", &histor[bookCounter].date[2]);
            printf("\n  \t \t \t \tnow enter the current time of selling:\n");
            printf(" \t \t \t \tthe hour: "); scanf("%d", &histor[bookCounter].time[0]);
            printf(" \t \t \t \tthe minute: "); scanf("%d", &histor[bookCounter].time[1]);
            histor[bookCounter].soldCount = oldQuantity - product[i].quantity;
            strcpy(histor[bookCounter].name, product[i].name);
            histor[bookCounter].priceTTC = product[i].price+(product[i].price*0.15);
            histor[bookCounter].totalP = histor[bookCounter].soldCount * histor[bookCounter].priceTTC;
             totalPiecesPurchased += histor[bookCounter].soldCount;
            bookCounter++;
        }
    }else{
        printf("\n \t \t \t \t \tthe code doesn't match any product.\n");
        printf("\n \t \t \t \t \t \tPress any key to continue.");
        system("cls");

    }
}

void registerBook(){

    system("cls");
    printf("\n\n\n\t \t product purchased  \n");
    printf("--------------------------------------------------------\n");
    printf("   Name    |  Price including TTC  |    date    |    time   \n");
    printf("------------------------------------------------------------\n");
    for(i=0; i<bookCounter; i++){
        printf("    %s    |       %.2f       |    %d/%d/%d    |    %d:%d    \n", histor[i].name, histor[i].priceTTC, histor[i].date[0], histor[i].date[1], histor[i].date[2], histor[i].time[0], histor[i].time[1]);
        printf("===============================================================================\n");
    }
}
void deleteProduct(){
    system("cls");
    int d, j;
    char c;
    printf("enter the code of product that you want to delete: "); scanf("%d", &d);
    for(i=0; i<counter; i++){
        if(product[i].code == d){
            printf(" name:   %s   | code:   %d   | quantity:   %d     | price:   %.2f dh  | Price including TTC:   %.2f dh\n", product[i].name, product[i].code, product[i].quantity, product[i].price, product[i].price + (product[i].price * 0.15));
            printf("are you sure you want to delete this product (y/n): "); scanf("%s", &c);
            if(c == 'y' || c =='Y'){
                for(j=i; j<counter; j++){
                    product[j] = product[j+1];
                }
                counter--;
                system("cls");
            } else if(c == 'n' || c == 'N'){
                printf("\nPress any key to continue.");
            }

        }else{
            printf("\nthe code doesn't match any product\n");
            printf("\nPress any key to continue.");
           
        }
    }
}

void salesStatistics(){
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n \t \t \t \t%d products sold this day.\n", totalPiecesPurchased);
    printf("the total prices of products sold in the current day is %.2f dh\n", totalPrice());
    printf("the average price of products sold on the current day is %.2f dh\n", averagePrice());
    printf("the Max price of products sold on the current day is %.2f dh\n", maxPrice());
    printf("the Min price of products sold in the current day is %.2f dh\n", minPrice());
    printf("\nPress any key to continue.");
}


float totalPrice(){
    float sum;
    for(i=0; i<bookCounter; i++){
        sum = sum + histor[i].totalP;
    }
    return sum;
}


float averagePrice(){
    float av;
    av = totalPrice()/(totalPiecesPurchased);
    return av;
}


float maxPrice(){
    float m = 0;
    for(i=0; i<bookCounter; i++){
        if(m<histor[i].priceTTC)
            m = histor[i].priceTTC;
    }
    return m;
}

float minPrice(){
    float n = 0;
    for(i=0; i<bookCounter; i++){
        if(n>histor[i].priceTTC || n==0)
            n = histor[i].priceTTC;
    }
    return n;
}
