#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr;
    ptr = fopen("Demo.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr,"This The Demo Line %d\n",i);
    }
    fclose(ptr);
    return 0;
}