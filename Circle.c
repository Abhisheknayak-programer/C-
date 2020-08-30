                                    // AREA OF CIRCLE CODE 



#include<stdio.h>

int main(){

int radius;
float pi=3.14,area;


printf("Enter the radius of the circle : \t");
scanf("%d",&radius);


area = pi * (radius * radius);

printf("\nArea of the circle is %f\n",area);

    return 0;
}





//                           PEREMETER OF A CIRCLE



#include<stdio.h>

int main(){
    float radius,peremeter,pi=3.14;

    printf("Enter the Radius of the Circle : \t");
    scanf("%f",&radius);

    peremeter = 2 * pi * radius;


    printf("The peremeter of the required circle is %f",peremeter);


    return 0;
}