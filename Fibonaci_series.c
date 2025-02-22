# include<stdio.h>


int main(){

    int n,num1,num2,next;
    num1= 0,num2=1;


    printf("Enter a number  :-");
    scanf("%d",&n);

    printf("Fibonaci series is ");
    for(int i=0; i<=n; i++){
        printf("%d ",num1);
        next = num1+num2;
        num1=num2;
        num2=next;
    }

    return 0;

}