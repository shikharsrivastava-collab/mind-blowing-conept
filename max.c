#include<stdio.h>
int main()
{
    int arr[7]={1,4,9,12,3,2,7};
    int max=arr[0];
    for (int  i = 0; i < 7; i++)
    {
        /* code */
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("%d",max);
    
}