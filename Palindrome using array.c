#include<stdio.h>
void main()
{
    int i,n,flag=0;
    char string[20];
    printf("Enter a string : ");
    gets(string);
    for(i=0;string[i]!=NULL;i++)
    {
    }
    n=i;
    for(i=0;i<=(n/2);i++)
    {
        if(string[i]!=string[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%s is palindrome",string);
    else
        printf("%s is not palindrome",string);
}
