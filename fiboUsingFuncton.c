#include<stdio.h>

int fact(int number1){

int a=0,b=1,c,i;
printf("%d %d",a,b);
for(i=2;i<number1;i+=1)
{
    c=a+b;
    printf(" %d",c);
    a=b;
    b=c;
}

}
int main(){

int number1,factorial;
printf("Enter the number of element you want to print\n");
scanf("%d",&number1);
factorial=fact(number1);

return factorial;
}