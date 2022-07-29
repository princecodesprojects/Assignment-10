#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial of %d is %d",n,fact);
    return 0;
}

int factorial(int n)
{
    int sum=1;
    for(int i=2;i<=n;i++)
    {
     sum=sum*i;
    }
    return sum;
}