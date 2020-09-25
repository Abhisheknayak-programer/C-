#include<stdio.h>

struct Vector{
    int real;
    int imaginary;
};

int main(){
    struct Vector V[2];
    for(int i=0;i<2;i++){
        printf("Enter The Value of Real of Vector %d\n",i+1);
        scanf("%d",&V[i].real);
    }
     for(int i=0;i<2;i++){
        printf("Enter The Value of imaginary of Vector %d\n",i+1);
        scanf("%d",&V[i].imaginary);
    }

     for(int i=0;i<2;i++){
        printf("The  Real value of Vector %d is %d\n",i+1,V[i].real);
        printf("The  imaginary value of Vector %d is %d\n",i+1,V[i].imaginary);
    }
  
    return 0;
}