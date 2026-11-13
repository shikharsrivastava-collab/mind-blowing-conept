#include<stdio.h>
int main()
{
    int a;
    printf("\n enter the size of array\n");
    scanf("%d",&a);
    int arr[a],count=0;
    for (int i = 0; i <a; i++)
    {
        printf("\n enter the %d element of array\n",i);
        scanf("%d",&arr[i]);
        if (arr[i]>3)
        {
            count++;
        }
        
        
    }
  printf("%d",count);
  return 0;
    
    
}