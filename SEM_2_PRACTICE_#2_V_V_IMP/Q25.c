#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,num;
    printf("Enter the num for which you want to see the multiplication table: \n");
    scanf("%d",&num);
    ptr = (int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++){
        printf("%d X %d = %d\n",num,i+1,num*(i+1));
    }

    ptr = realloc(ptr,15*sizeof(int));

    printf("After the Reallocation of the memory\n");

     for(int i=0;i<15;i++){
        printf("%d X %d = %d\n",num,i+1,num*(i+1));
    }

    free(ptr);
    return 0;
}