#include <stdio.h>
int factorial(int);

int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    // printf("the factorial of this number is %d",factorial(n));

    return factorial(n-1)*n;
}
int main(){
    int a=5;
     printf("the factorial of this number is %d",factorial(a));
    return 0;
}
