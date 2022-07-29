#include<stdio.h>
#include<conio.h>
int chechDigit(int n,int d);
int main()
{
    int n,d;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter a digit\n");
    scanf("%d",&d);
    int s=chechDigit( n,d);
    if(s)
   printf("%d is in %d",d,n);
   else 
   printf("%d is not in %d",d,n);
    return 0;
}

int chechDigit(int n,int d)
{
    while(n)
    {
        int r=n%10;
        if(r==d)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}