#include<stdio.h>
int main()
{
    int mainChoice,userInput,l,b,s,r;
    float pi2=2*3.15, pi=3.14;
 
    printf("For Calculating Perimeter: 1\nFor Calculating Area: 2\n");
    scanf("%d",&mainChoice);
    if(mainChoice==1){
        printf("For Rectangle : 1\nFor Square :2\nFor Circle :3\n");
        scanf("%d",&userInput);

        if(userInput==1){
            printf("Enter Lenght & Breadth");
            scanf("%d %d",&l,&b);
            printf("The Perimeter Of Rectangle of Side %d  & %d is %d",l,b,2*(l+b));
        }
        if(userInput==2){
            printf("Enter Side");
            scanf("%d",&s);
            printf("The Perimeter Of square of Side %d is %d",s,4*s);
        }
        if(userInput==3){
            printf("Enter radius");
            scanf("%d",&r);
            printf("The Perimeter Of circle of radius %d is %f",r,pi2*r);
        }
    }
    if(mainChoice==2){
         printf("For Rectangle : 1\n For Square :2\n For Circle :3\n");
        scanf("%d",&userInput);

        if(userInput==1){
            printf("Enter Lenght & Breadth");
            scanf("%d %d",&l,&b);
            printf("The arae Of Rectangle of Side %d & %d is %d",l,b,l*b);
        }
        if(userInput==2){
            printf("Enter Side");
            scanf("%d",&s);
            printf("The area Of square of Side %d is %d",s,s*s);
        }
        if(userInput==3){
            printf("Enter radius");
            scanf("%d",&r);
            printf("The arae Of circle of radius %d is %f",r,pi*r*r);
        }
    }
    return 0;
}