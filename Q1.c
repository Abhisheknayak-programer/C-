#include<stdio.h>
#include<stdlib.h>



//// Function To Enter The Single Matrix data

void EnterSingleData(int singleMatrix[][10],int row,int col){
 
 printf("\nEnter Element Of Matrix :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter The Element arr %d%d : \n",i+1,j+1);
            scanf("%d",&singleMatrix[i][j]);
        }
    }

}




//// Function  For entering both of the matrix at a time

void enterBothData(int firstMatrix[][10],int secondMatrix[][10],int rowFirst,int colfirst,int rowSecond,int colSecond){
    printf("\nEnter Element Of Matrix 1 :\n");
    for(int i=0;i<rowFirst;i++){
        for(int j=0;j<colfirst;j++){
            printf("Enter The Element arr %d%d : \n",i+1,j+1);
            scanf("%d",&firstMatrix[i][j]);
        }
    }


    printf("\nEnter Element Of Matrix 2 :\n");
    for(int i=0;i<rowSecond;i++){
        for(int j=0;j<colSecond;j++){
            printf("Enter The Element arr %d%d : \n",i+1,j+1);
            scanf("%d",&secondMatrix[i][j]);
        }
    }
}




//// For The Displaying of a single matrix data

void display(int singleMatrix[][10],int row,int col){
 printf("\nPrinting The Matrix : \n");

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",singleMatrix[i][j]);
        }
        printf("\n");
    }

}





//// For the Displaying of Both  the matrix at a time

void displayBothMatrix(int firstMatrix[][10],int secondMatrix[][10],int rowFirst,int colfirst,int rowSecond,int colSecond){
    printf("\nPrinting The Matrix 1 : \n");

    for(int i=0;i<rowFirst;i++){
        for(int j=0;j<colfirst;j++){
            printf("%d ",firstMatrix[i][j]);
        }
        printf("\n");
    }


    printf("\nPrinting The Matrix 2 : \n");

    for(int i=0;i<rowSecond;i++){
        for(int j=0;j<colSecond;j++){
            printf("%d ",secondMatrix[i][j]);
        }
        printf("\n");
    }

}





//// Addition Function for  the matrix
void AddTwoMatrix(int firstMatrix[][10],int secondMatrix[][10],int add[][10],int rowFirst,int colfirst,int rowSecond,int colSecond){


    //// Adding Loop
    for(int i=0;i<rowFirst;i++){
        for(int j=0;j<colSecond;j++){
            add[i][j] = firstMatrix[i][j]+secondMatrix[i][j];
        }
    }

    //// Calling Single matrix Display Function

    display(add,rowFirst,colSecond);

}



//// Substraction Function for the matrix
void SubTwoMatrix(int firstMatrix[][10],int secondMatrix[][10],int sub[][10],int rowFirst,int colfirst,int rowSecond,int colSecond){
  
  //// Substraction Loop
    for(int i=0;i<rowFirst;i++){
        for(int j=0;j<colSecond;j++){
            sub[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    }

    //// Calling Single matrix Display Function

    display(sub,rowFirst,colSecond);
}




//// Multiplication Function for the matrix
void MulTwoMatrix(int firstMatrix[][10],int secondMatrix[][10],int mul[][10],int rowFirst,int colfirst,int rowSecond,int colSecond){
 
 //// Multiplication Loop
    for(int i=0;i<rowFirst;i++){
        for(int j=0;j<colSecond;j++){
            mul[i][j] = firstMatrix[i][j] * secondMatrix[i][j];
        }
    }

    //// Calling Single matrix Display Function

    display(mul,rowFirst,colSecond);
}





//// Transpose of the matrix

void TransposeMatrix(int firstMatrix[][10],int transpose[][10],int rowFirst,int colfirst){

    //// Exchanging the data and printing

    for(int i=0;i<rowFirst;i++){
        for(int j=0;j<colfirst;j++){
            transpose[i][j] = firstMatrix[j][i];
        }
    }

     for(int i=0;i<colfirst;i++){
        for(int j=0;j<rowFirst;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}



////Exit Function from the switch case
void Exit(){
    exit(1);
}




int main(){

    int choice,rowsfirst,colsfirst,rowsecond,colsecond,firstMatrix[10][10],secondMatrix[10][10],addedMatrix[10][10],sub[10][10],mul[10][10],transpose[10][10];

    while(1){
        printf("Enter 1 For Display Matrix\n");
        printf("Enter 2 For Transpose Of Matrix\n");
        printf("Enter 3 For Addition Matrix\n");
        printf("Enter 4 For Substraction Matrix\n");
        printf("Enter 5 For Multiplication Matrix\n");
        printf("Enter 6 For Exit\n");
        scanf("%d",&choice);



        switch (choice)
        {
        case 1:
            printf("Enter The Rows  And Column Of First Matrix : \n");
            scanf("%d%d",&rowsfirst,&colsfirst);
            EnterSingleData(firstMatrix,rowsfirst,rowsecond);
            display(firstMatrix,rowsfirst,colsfirst);
            break;

   
        case 2:
            printf("Enter The Rows  And Column Of First Matrix : \n");
            scanf("%d%d",&rowsfirst,&colsfirst);

            //// Transpose Function Check
            EnterSingleData(firstMatrix,rowsfirst,colsfirst);
            TransposeMatrix(firstMatrix,transpose,rowsfirst,colsfirst);
            break;
        
        case 3:
            printf("Enter The Rows  And Column Of First Matrix : \n");
            scanf("%d%d",&rowsfirst,&colsfirst);
            printf("Enter The Rows  And Column Of Second Matrix : \n");
            scanf("%d%d",&rowsecond,&colsecond);

            enterBothData(firstMatrix,secondMatrix,rowsfirst,colsfirst,rowsecond,colsecond);
            displayBothMatrix(firstMatrix,secondMatrix,rowsfirst,colsfirst,rowsecond,colsecond);
            
            // Adding Function Check
            AddTwoMatrix(firstMatrix,secondMatrix,addedMatrix,rowsfirst,colsfirst,rowsecond,colsecond);
            break;

        case 4:
            printf("Enter The Rows  And Column Of First Matrix : \n");
            scanf("%d%d",&rowsfirst,&colsfirst);
            printf("Enter The Rows  And Column Of Second Matrix : \n");
            scanf("%d%d",&rowsecond,&colsecond);

            enterBothData(firstMatrix,secondMatrix,rowsfirst,colsfirst,rowsecond,colsecond);
            displayBothMatrix(firstMatrix,secondMatrix,rowsfirst,colsfirst,rowsecond,colsecond);

            // Substraction Function Check
            SubTwoMatrix(firstMatrix,secondMatrix,sub,rowsfirst,colsfirst,rowsecond,colsecond);
            break;

        case 5:
            printf("Enter The Rows  And Column Of First Matrix : \n");
            scanf("%d%d",&rowsfirst,&colsfirst);
            printf("Enter The Rows  And Column Of Second Matrix : \n");
            scanf("%d%d",&rowsecond,&colsecond);
            
            enterBothData(firstMatrix,secondMatrix,rowsfirst,colsfirst,rowsecond,colsecond);
            displayBothMatrix(firstMatrix,secondMatrix,rowsfirst,colsfirst,rowsecond,colsecond);

            // Multiplication Function Check
            MulTwoMatrix(firstMatrix,secondMatrix,mul,rowsfirst,colsfirst,rowsecond,colsecond);
            break;

        case 6:
            // Exit From The Switch
            Exit();
            break;

        default:
            break;
        }
    }

    

    return 0;
}