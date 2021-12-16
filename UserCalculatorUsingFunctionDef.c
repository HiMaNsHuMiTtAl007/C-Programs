#include <stdio.h>

int add(int a,int b){
    
    int sum;
    sum= a+b;
    printf("%d\n",sum);
}

int sub(int a,int b){
    
    int sub;
    sub= a-b;
    printf("%d\n",sub);
}

int mul(int a,int b){
    
    int mul;
    mul= a*b;
    printf("%d\n",mul);
}

int divi(int a,int b){
    
    int divi;
    divi= a/b;
    printf("%d\n",divi);
}


int main()
{
    int a,b,user,user_main;
    
    printf("To start press:1\nTo Exit press:0\n");
    scanf("%d",&user_main);

    while(user_main==1){
    printf("Select Operator\n 1:Addition\n 2:Subtraction\n 3:Multiplication\n 4:Division\n");
    scanf("%d",&user);
    
        if(user==1){
        printf("Enter Numbers you want to perform operation\n");
        scanf("%d %d",&a,&b);
        add(a,b);}
        
        if(user==2){
        printf("Enter Numbers you want to perform operation\n");
        scanf("%d %d",&a,&b);
        sub(a,b);}
        
        if(user==3){
        printf("Enter Numbers you want to perform operation\n");
        scanf("%d %d",&a,&b);
        mul(a,b);}
        
        if(user==4){
        printf("Enter Numbers you want to perform operation\n");
        scanf("%d %d",&a,&b);
        divi(a,b);}
        
        printf("\nTo Continue press:1\nTo Exit press:0\n ");
        scanf("%d",&user_main);
        }
    if(user_main==0){
        printf("Thank You for using our application..");}
    else{
        printf("ERROR");
    }
        

    
    return 0;
}