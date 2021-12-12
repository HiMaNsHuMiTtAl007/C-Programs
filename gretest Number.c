#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter First Number");
    scanf("%d",&x);
    printf("Enter Second Number");
    scanf("%d",&y);
    printf("Enter Third Number");
    scanf("%d",&z);

    if(x>y && x>y)
        printf("%d is largest",x);
    if(y>z && y>x)
        printf("%d is largest",y);
    if(z>x && z>y)
        printf("%d is largest",z);

return 0;
}