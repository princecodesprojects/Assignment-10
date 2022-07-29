#include<stdio.h>
#include<conio.h>
void printNaturalNumber(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printNaturalNumber( n);
    return 0;
}

void printNaturalNumber(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}