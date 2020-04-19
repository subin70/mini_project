#include <stdio.h>
#include <string.h>

typedef struct 
{ 
    char name[30];
    int gram; 
    int price;
    int stdprice;
    int star;
} Product;

//함수 prototype
//Crud
int createProduct(Product *p);
int readProduct(Product p); //
int updateProduct(Product *p);
int deleteProduct(Product *p);
int selectMenu();


