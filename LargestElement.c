#include<stdio.h>
int LargestElementFinder(int arr[]);

int LargestElementFinder(int arr[5]){
    int large = 0;

    for(int i=0;i<5;i++){
        if(large < arr[i]){
            large = arr[i];
        }
    }
    return large;
}

int main(){
    int arr[5],num,large;
    printf("Enter The Array Mind The Limit Is  ***max-limit==5***\n");
   

    printf("Enter The Array Elements\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    large = LargestElementFinder(arr);
    

    printf("\nThe Largest Element From The Given Array Is %d\n",large);

    return 0;
}