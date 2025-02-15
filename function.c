# include <stdio.h>
int sum(int,int);

int sum(int x,int y){
    printf("the sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=4;
    int b=6;
    int c=sum(a,b);
    
    

    sum(c,6);

    return 0;

}
