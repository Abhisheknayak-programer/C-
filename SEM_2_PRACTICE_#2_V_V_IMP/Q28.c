#include<stdio.h>

struct Emp{
    int id;
    char name[10];
};

int main(){
    struct Emp e1;
    struct Emp *ptr;

    ptr = &e1;
        printf("Enter the Name of Employee %d : ",1);
        scanf("%s",ptr->name);
        printf("\nEnter the ID of Employee %d : ",1);
        scanf("%d",&ptr->id);


        printf("\nThe Name of Employee %d  is %s",1,ptr->name);
        printf("\nThe ID of Employee %d is %d",1,ptr->id);

    return 0;
}