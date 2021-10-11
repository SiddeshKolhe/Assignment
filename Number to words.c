#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    word(n);
}
void word(int num)
{
    int i,rev=0,rem,place=0;
    if(num==0)
    {
        printf("Zero");
        return;
    }
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
        place++;
    }

    while(rev!=0)
    {
        rem=rev%10;
        rev=rev/10;
        switch(place)
        {
            case 1:ZeroToNine(rem);break;
            case 2:if(rem==1)
            {
                TenToNineteen(rev);break;
            }
            else
            {
                TwentyToNinety(rem);
            };break;
            case 3:ZeroToNine(rem);printf(" Hundred ");break;
            case 4:ZeroToNine(rem);printf(" Thousand ");break;
            case 5:if(rem==1)
                        TenToNineteen(rev);
                    else
                        TwentyToNinety(rem);
                    printf(" Thousand ");
                    place--;break;
            default:break;
        }
        if(rem==1 && place==1)
            break;
        place--;
    }
}

void ZeroToNine(int n)
{
    switch(n)
            {
                case 0:printf("zero");break;
                case 1:printf("one ");break;
                case 2:printf("two ");break;
                case 3:printf("three ");break;
                case 4:printf("four ");break;
                case 5:printf("five ");break;
                case 6:printf("six ");break;
                case 7:printf("seven ");break;
                case 8:printf("eight ");break;
                case 9:printf("nine ");break;
                default:break;
            }
}

void TwentyToNinety(int n)
{
    switch(n)
                {
                    case 2:printf("twenty ");break;
                    case 3:printf("thirty ");break;
                    case 4:printf("fourty ");break;
                    case 5:printf("fifty ");break;
                    case 6:printf("sixty ");break;
                    case 7:printf("seventy ");break;
                    case 8:printf("eighty ");break;
                    case 9:printf("ninety ");break;
                    default:break;
                }
}

void TenToNineteen(int n)
{
    int a;
    a=n%10;
    switch(a)
                {
                    case 0:printf("ten");break;
                    case 1:printf("eleven");break;
                    case 2:printf("twelve");break;
                    case 3:printf("thirteen");break;
                    case 4:printf("fourteen");break;
                    case 5:printf("fifteen");break;
                    case 6:printf("sixteen");break;
                    case 7:printf("seventeen");break;
                    case 8:printf("eighteen");break;
                    case 9:printf("nineteen");break;
                    default:break;
                }
}
