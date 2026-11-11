#include<stdio.h>
void shikhar(int *arr)
{
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}
int main()
{
    int lol[2]={2,9};
    printf("%d %d\n",lol[0],lol[1]);
    shikhar(lol);
    printf("%d %d\n",lol[0],lol[1]);

}