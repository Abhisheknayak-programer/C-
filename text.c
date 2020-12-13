#include<stdio.h>

int main(){
    int arr[10];
    int limit;

    printf("Enter The limit : \n");
    scanf("%d",&limit);

    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = limit-1;j>=0;j--){
        printf("%d\n",arr[j]);
    }


    return 0;
}


