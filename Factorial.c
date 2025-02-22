#include<stdio.h>
int main(){
    int num;
    int factorial=1;
    printf("Enter number :- ");
    scanf("%d ",&num);
    if(num==0||num==1){
        factorial=1;
    }
    else{

    for(int i =1; i<=num; i++){
        factorial=factorial*i;

       
    }
}


    printf("factorial of %d is %d ",num,factorial);

    return 0;
}