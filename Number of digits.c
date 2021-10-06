#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    CountDigit(n);
}

void CountDigit(int num)
{
    int rem;
    int i,a[10];

    for(i=0;i<10;i++)
    {
            a[i]=0;
    }

    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        switch(rem)
        {
            case 0:a[0]++;break;
            case 1:a[1]++;break;
            case 2:a[2]++;break;
            case 3:a[3]++;break;
            case 4:a[4]++;break;
            case 5:a[5]++;break;
            case 6:a[6]++;break;
            case 7:a[7]++;break;
            case 8:a[8]++;break;
            case 9:a[9]++;break;
            default:break;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\nNumber of %d=%d",i,a[i]);
    }
}
