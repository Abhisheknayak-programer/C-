#include<stdio.h>
int main(){
int num,count=1,i;

printf("Enter The No. \n");
scanf("%d",&num);

for(i=1;i<=num;i++){
    if(num%i == 0){
        count++;
    }break;
}
if(count==2){
    printf("The No. is a prime No.");
}
else{
    printf("The no. is not a prime No.");

}
return 0;
}