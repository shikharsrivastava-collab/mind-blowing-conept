#include<stdio.h>
int main()
{
    char ch;
    char word[100];
    char sent[100];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",word);
    printf("%s\n",word);
    scanf("%[^\n]",sent);
    printf("%s",sent);
    return 0;
}