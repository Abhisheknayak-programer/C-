#include<stdio.h>

int sum(int a,int b){
    int c=0;
    c = a+b;
    return c;
}
int sub(int a,int b){
    int c=0;
    c = a-b;
    return c;
}
int mul(int a,int b){
    int c=0;
    c = a*b;
    return c;
}
int div(int a,int b){
    int c=0;
    c = a/b;
    return c;
}

int main(){
    int a,b,sum1,mul1,div1,sub1;

    printf("Enter the Value of A And B : \t");
    scanf("%d%d",&a,&b);

    sum1 = sum(a,b);
    sub1 = sub(a,b);
    mul1 = mul(a,b);
    div1 = div(a,b);


    printf("\n The Sum is %d ",sum1);
    printf("\n The Sub is %d ",sub1);
    printf("\n The Mul is %d ",mul1);
    printf("\n The Div is %d ",div1);


    return 0;
}