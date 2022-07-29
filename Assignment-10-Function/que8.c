#include<stdio.h>
#include<conio.h>
int permutation(int n,int r);
int main()
{
    int n,r;
    printf("Enter total items\n");
    scanf("%d",&n);
     printf("Enter selected  items\n");
    scanf("%d",&r);
    printf("permutation is %d",permutation(n,r));
    return 0;
}

int permutation(int n,int r)
{
    int nFact=1,nMinusRfact=1;
    for(int i=2;i<=n;i++)
    {
      nFact=nFact*i;
    }
     int nMinusR=n-r;
    for(int i=1;i<=nMinusR;i++)
    {
        nMinusRfact=nMinusRfact*i;
    }
    int perm=nFact/nMinusRfact;
    return perm;
}