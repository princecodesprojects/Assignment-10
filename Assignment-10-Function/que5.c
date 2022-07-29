#include<stdio.h>
#include<conio.h>
void printOddlNumber(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printOddlNumber( n);
    return 0;
}

void printOddlNumber(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i*2-1);
    }
}