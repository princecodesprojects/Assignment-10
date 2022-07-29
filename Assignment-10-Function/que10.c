#include<stdio.h>
#include<conio.h>
void primeFactor(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    primeFactor(n);
    return 0;
}

void primeFactor(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
    }
}

// void primeFactor(int n)
// {
//     int j,i;
//  for( i=2;i<=n/2;i++)
//  {
//     if(n%i==0)
//     {
//        if(i==2)
//        {
//         printf("%d ",i);
//        }
//        else
//        {
//         for(j=2;j<=i-1;j++)
//         {
//             if(i%j==0)
//             {
//                 break;
//             }
//         }
//         if(i==j)
//         printf("%d ",i);
//        }
//     }
//  }
// }