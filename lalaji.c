#include<stdio.h>
void main()
{
    char ch;
    char p[100];
    char t[100];
    scanf("%c",&ch);
    //scanf("%s",p);
    scanf(" %[^\n]%*c",t);
    printf("%c\n",ch);
    //printf("%s",p);
    printf("%s",t);
    
}