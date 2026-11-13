#include<stdio.h>
int main()
{
    int a;
    printf("enter the size of array\n");
    scanf("%d",&a);
    int arr[a],sumofeven=0,sumofodd=0;
    for (int i = 0; i <a; i++)
    {
        printf("enter the %d element of c\n",i);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            sumofeven++;
        }
        else
        sumofodd++;
        

    }
    printf("the answer is:%d\n",sumofeven-sumofodd);
    
    
    
}