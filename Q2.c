#include<stdio.h>
#include<stdlib.h>


struct student
{
    int roll;
    char name[20];
    int mark;
};



//// Entering The data
void EnterData(struct student s[10]){

    printf("\nEnter The Information Of The Student : \n");

        for(int i=0;i<10;i++){
        printf("Enter The Name : \n");
        scanf("%s",&s[i].name);
        
        printf("Enter The Roll Number : \n");
        scanf("%d",&s[i].roll);

        printf("Enter The Mark : \n");
        scanf("%d",&s[i].mark);
      
    }
}



//// Displaying the data
void DisplayData(struct student s[10]){
    
  for(int i=0;i<10;i++){
        printf("Enter The Roll Number : %d \n",s[i].roll);
        printf("Enter The Name : %s \n",s[i].name);
        printf("Enter The Mark : %d \n",s[i].mark);
    }
}


////Exit Switch
void Exit(){
    exit(1);
}



//// Average Marks
int AverageMarks(struct student s[10]){
    int sum = 0;
    for(int i=0;i<10;i++){
        sum = sum + s[i].mark;
    }

    sum = sum/10;
    return sum;
}



//// Add 5 More Students
void AddExtraData(struct student s[15]){
        
        printf("\nEnter The Information Of The Student : \n");

        for(int i=10;i<15;i++){
        printf("Enter The Name : \n");
        scanf("%s",&s[i].name);
        
        printf("Enter The Roll Number : \n");
        scanf("%d",&s[i].roll);

        printf("Enter The Mark : \n");
        scanf("%d",&s[i].mark);
      
        }

       
     for(int i=0;i<15;i++){
        printf("Enter The Roll Number : %d \n",s[i].roll);
        printf("Enter The Name : %s \n",s[i].name);
        printf("Enter The Mark : %d \n",s[i].mark);
    }

}



int main(){
    struct student s[10];
    int Average,choice;








    


    while(1){
        printf("Enter 1 For Input 10 Marks\n");
        printf("Enter 2 For Display Marks\n");
        printf("Enter 3 For Average Marks\n");
        printf("Enter 4 For Add More Stdents\n");
        printf("Enter 5 For Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                EnterData(s);
                break;

   
        case 2:
            DisplayData(s);
            break;
        
        case 3:
            Average = AverageMarks(s);
            printf("\nThe average Mark is %d\n",Average);
            break;

        case 4:
            EnterData(s);
            AddExtraData(s);
            break;

        case 5:
            // Exit From The Switch
            Exit();
            break;

        default:
            break;
        }
        }

    return 0;
}
