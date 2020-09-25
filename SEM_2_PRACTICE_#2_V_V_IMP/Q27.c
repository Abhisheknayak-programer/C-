#include<stdio.h>
typedef struct Vector{
    int real;
    int imaginary;
}vec;

void sumvector(vec v1[2][2]){
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum = v1[i][j].real + v1[i][j].imaginary;
            printf("\n The sum of the Two Numbers Are %d\n",sum);
            sum=0;
        }
    }
}

int main(){
    vec v1[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter the Real No.: ");
            scanf("%d",&v1[i][j].real);
            printf("\nEnter the Imaginary No.: ");
            scanf("%d",&v1[i][j].imaginary);
        }
    }


    sumvector(v1);


    return 0;
}