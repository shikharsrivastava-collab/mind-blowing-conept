#include<stdio.h>
int main()
{
    int a;
    printf("enter the size of array\n");
    scanf("%d",&a);
    int arr[a],count=0;
    for (int i = 0; i < a; i++)
    {
        printf("enter the %d element of array\n",i);
        scanf("%d",&arr[i]);
        for (int j = 1; j < a; j++)
        {
            if (arr[i]+arr[j]==4)
            {
                count++;   
            }
        }
        
             
    }
    printf("the pair count is :%d\n",count);
    return 0;
    
}