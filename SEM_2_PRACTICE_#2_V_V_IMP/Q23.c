#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));

    
    for(int i=0;i<5;i++){
        printf("Enter The Value of %dth element\n",i+1);
        scanf("%d",&ptr[i]);
    }  
    for(int i=0;i<5;i++){
       printf("the Values Are %d\n",ptr[i]);
    }




    ptr = realloc(ptr,10*sizeof(int));

    for(int i=0;i<10;i++){
        printf("Enter The Value of %dth element\n",i+1);
        scanf("%d",&ptr[i]);
    }  
    for(int i=0;i<10;i++){
       printf("the Values Are %d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}