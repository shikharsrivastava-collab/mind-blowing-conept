#include<stdio.h>
void main()
{
    float price[3],finalprice,totalprice=0;
    for (int  i = 0; i < 3; i++)
    {
        scanf("%f",&price[i]);
        totalprice=totalprice+price[i];
    }
    finalprice=totalprice+(totalprice*18)/100;
    printf("%.2f",finalprice);
    
   
    
    
}