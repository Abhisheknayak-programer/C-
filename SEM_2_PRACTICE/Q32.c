#include<stdio.h>
int main(){
     int a[3][3],b[3][3],sum[3][3],max=0;
     printf("Enter the Value Of Matrix 1 :\n");
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
        }

     printf("Enter the Value Of Matrix 2 :\n");
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
        }
        }



        
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j] = a[i][j]+b[i][j];
        }
        }

     printf("The sum of the two matrix will be :\n");
              
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf("%d  ",sum[i][j]);
        }
        printf("\n");
        }

    return 0;
}
