#include <stdio.h>

int fact(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    return n * fact(n-1); 
}
 
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int p=fact(n);
    printf("factorial of %d = %d \n",n,p);
    return 0;
}