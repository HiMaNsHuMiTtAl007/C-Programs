#include<stdio.h>
int main()
{
    int c,n,i,user1;
    printf("From where do you want to start the Fibonacci series\n"); //First element will be of user's choice
    scanf("%d",&user1);

    int b=user1+1; //As normal fibo series has first two element as 0 and 1 thus assuming second element with succession of 1 

    printf("Enter number of element you want in fibo series\n");
    scanf("%d",&n);
    printf("%d %d",user1,b);
    for(i=0;i<n;i+=1)
    {
    c=user1+b;
    printf(" %d",c);
    user1=b;
    b=c;

    }
    return 0;


}