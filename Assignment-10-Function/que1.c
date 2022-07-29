#include<stdio.h>
#include<conio.h>
float circleArea(int r);
int main()
{
int r;
printf("Enter radius of circle");
scanf("%d",&r);
printf("area of circle is %f",circleArea( r));
return 0;
}

float circleArea(int r)
{
    return 3.14*r*r;
}