#include <stdio.h>
int main()
{
    printf("enter the size of array\n");
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter the %d indexing element of array\n", i);
        scanf("%d", &arr[i]);
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\t", arr[i]);
    }
}