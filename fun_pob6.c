# include <stdio.h>
int fibonacci(int);

int fibonacci(int n){
    if(n==1|| n==2){
        return n-1;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int n=4;
    printf("the fibonacci of %d is %d ",n,fibonacci(n));

}