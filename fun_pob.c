# include <stdio.h>
float average(int a,int b,int c);

float average(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a=3;
    int b=4;
    int c=7;
    printf("the average of a b c if %f",average(a,b,c));
}