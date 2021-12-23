#include <stdio.h>

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    return n + sum(n-1); 
}
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int s=sum(n);
    printf("sum = %d \n",s);
    getch();
}