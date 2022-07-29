#include<stdio.h>
#include<conio.h>
int combination(int n,int r);
int main()
{
    int n,r;
    printf("Enter total items\n");
    scanf("%d",&n);
     printf("Enter selected  items\n");
    scanf("%d",&r);
    printf("Combination is %d",combination(n,r));
    return 0;
}


int combination(int n,int r)
{
    int nFact=1,rFact=1,nMinusRfact=1;
    for(int i=2;i<=n;i++)
    {
      nFact=nFact*i;
    }
    for(int i=2;i<=r;i++)
    {
      rFact=rFact*i;
    }
    int nMinusR=n-r;
    for(int i=1;i<=nMinusR;i++)
    {
        nMinusRfact=nMinusRfact*i;
    }
    int combo=nFact/(rFact*nMinusRfact);
    return combo;
}