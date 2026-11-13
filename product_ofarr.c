#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    int mul=1;
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of array\n",i);
        scanf("%d",&arr[i]);
        mul=mul*arr[i];
    }
    printf("the mul of array is %d\n",mul);
    return 0;

    
}