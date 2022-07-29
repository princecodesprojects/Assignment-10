#include<stdio.h>
#include<conio.h>
float simpleInterest(int p,float r,int t);
int main()
{
int p,t;
float r;
printf("Enter princle amount,rate and time");
scanf("%d %f %d",&p,&r,&t);
printf("simple interest is %f",simpleInterest(p,r,t));
return 0;
}

float simpleInterest(int p,float r,int t)
{

    return p*(1+r*t);
}