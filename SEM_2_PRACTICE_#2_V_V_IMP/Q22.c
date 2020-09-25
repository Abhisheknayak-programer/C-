////                Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;

    ptr = (int*)calloc(6 ,sizeof(int));

    for(int i=0;i<6;i++){
        printf("Enter The Value of %dth element\n",i+1);
        scanf("%d",&ptr[i]);
    }

    
    for(int i=0;i<6;i++){
       printf("the Values Are %d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}