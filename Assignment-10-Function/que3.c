#include<stdio.h>
#include<conio.h>
int evenOddCheck(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int s=evenOddCheck(n);
    if(s==1)
    printf("%d is even number\n",n);
    else
    printf("%d is odd number\n",n);
    return 0;
}

int evenOddCheck(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}