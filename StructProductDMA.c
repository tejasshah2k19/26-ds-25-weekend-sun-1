#include <stdio.h>
#include <stdlib.h>

struct product
{
    int productId;
    char name[30];
    int price;
    int qty;
};

int main()
{

    // struct product p;//productId name price qty
    struct product *p = (struct product *)malloc(sizeof(struct product));
    int i;
    struct product *s = (struct product *)calloc(5, sizeof(struct product));
    // s[0] s[1] s[2] s[3] s[4]

    // printf("\nEnter product id , product name price and qty");
    // scanf("%d%s%d%d",&p->productId,&p->name,&p->price,&p->qty);

    // printf("\nProductId Name\tQty Price");
    // printf("\n%5d  %13s %3d %3d",p->productId,p->name,p->qty,p->price);

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter product id , product name price and qty");
        scanf("%d%s%d%d", &s[i].productId, &s[i].name, &s[i].price, &s[i].qty);
    }

    printf("\nProductId Name\tQty Price");
    for (i = 0; i < 3; i++)
    {
        printf("\n%5d  %-13s %3d %3d", s[i].productId, s[i].name, s[i].qty, s[i].price);
    }
    //_____ _______________ ___ ____
    return 0;
}

/*
    
    0 exit 
    1 Add Product 
    2 List All Product 
    3 Search Product 
    4 sort by price [asc]    


    1 -> 
        input product 
    1 -> 
        input product 
        
    2 -> List 
        XXX 
        YYY 
    3-> enter product name 
        iphone 
        XXdisplay info of iphone XX 

        not found 


*/