#include<stdio.h>
int main()
{
    int n,fact,nfact,a;
    printf("enter number");
    scanf("%d",&n);

    for(a=n ;a<=1; a-=1)
    {
    printf("%d",a);
    fact= a;
    nfact =fact*n;
    printf("%d",nfact);
    }
    return 0;
}