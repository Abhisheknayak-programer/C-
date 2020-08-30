//    AREA OF A RECTANGLE BY USING C PROGRAMMING

#include<stdio.h>

int main(){
    
    int length,breadth,area;

    printf("Enter Length And Breadth of the Reactangle: \t");
    scanf("%d%d",&length,&breadth);


    area = length * breadth;

    printf("The area of the reactangle is %d",area); 


    return 0;
}



//    Peremeter of the rectangle 


#include<stdio.h>


int main(){
    int len,bre,peremeter;
     
     
    printf("Enter Length And Breadth of the Reactangle: \t");
    scanf("%d%d",&len,&bre);
    

    peremeter = 2 * (len+bre);

    printf("PEREMETER OF THE RECTANGLE IS %d",peremeter);

    return 0;
}