#include <stdio.h>
#include <stdlib.h>


void sort2dArray2(int lines,int cols,int array[lines][cols]){
    int c ;
    for(int t = 0;t<lines*cols;t++){
    for(int i = 0;i<lines;i++){
        for(int j = 0;j<cols;j++){
            if(array[i][j]>array[i][j+1]){
               c = array[i][j];
                    array[i][j] = array[i][j+1];
                    array[i][j+1] = c;
            }

        }

    }
}
}
void prt(int lines,int cols ,int array[lines][cols]){
      for(int i = 0;i<lines;i++){
        for(int j = 0;j<cols;j++){
            printf("array[%d][%d] = %d ",i,j,array[i][j]);
        }
        printf("\n");
    }
}
void appearance(int lines,int cols,int array[lines][cols]){
   int num;int countOfnum = 0;
   printf("Enter the number you want to count its appearance :");
    scanf("%d",&num);
    for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
            if(array[i][j] == num){
                countOfnum++;
                }
        }
    }
    printf("The Appearance Of %d in your array is %d : ",num,countOfnum);
    printf("\n");
    printf("If you want to see the spots of appearance press 1 : \n");
    int choice1;
    scanf("%d",&choice1);
    if(choice1 == 1){
     for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
            if(array[i][j] == num){
                printf("-Colone %d of the line %d \n",j,i);
            }
            }
    }
    }
}
void multiplesOfnum(int lines ,int cols,int array[lines][cols]){
   int num2;int countOfMultiple = 0;
   printf("Enter the number you want to count its Multiplies :");
    scanf("%d",&num2);
    for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
            if(array[i][j] % num2 == 0 || array[i][j]  == num2){
                countOfMultiple++;
                }}
    }
     printf("The multiples of %d Appered  %d Times   : ",num2,countOfMultiple);
    printf("\n");
    printf("If you want to see the spots of appearance press 1 : \n");
    int choice3;
    scanf("%d",&choice3);
    if(choice3 == 1){
     for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
            if(array[i][j] % num2 == 0){
                printf("-Colone %d of the line %d \n",j,i);
            }
            }
    }
    }}
int Max(int lines,int cols,int array[lines][cols]){
    int max = array[0][0] ;
    for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
           if(array[i][j]>max){
            max = array[i][j];
           }
    }

}
return max;
}
int Min(int lines,int cols,int array[lines][cols]){
    int min = array[0][0] ;
    for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
           if(array[i][j]<min){
            min = array[i][j];
           }
    }

}
return min;
}
void uniqueNumbers(int lines,int cols,int array[lines][cols]){
   int countDuplicates = 0;int currentValue;
  for(int i = 0;i<lines;i++){
    for(int j = 0;j<cols;j++){
       currentValue = array[i][j];
  for(int i2 = 0;i2<lines;i2++){
    for(int j2 = 0;j2<cols;j2++){
        if(currentValue == array[i2][j2] && i2 != i && j2 != j){
           countDuplicates++;
           }
        }

    }

    if(countDuplicates == 0){
        printf("-L'element %d dans le spot [%d][%d] est unique \n",array[i][j],i,j);
    }
    countDuplicates = 0;
    }
  }


}
void merge2arrays(int lines , int colons , int array[lines][colons]){
    int secArray[lines][colons*2] ;
    for(int i = 0;i<(lines);i++ ){
        for(int j = 0;j<(colons*2);j++){
            while(j<colons){
            secArray[i][j] == 5;
            printf("%d\n",secArray[i][j]);
            break;
            }
            while(j>=colons && j<colons*2){
             printf("Spot [%d][%d] : ",i,j),
             scanf("%d",&secArray[i][j]);
            break;
            }


        }
    }
    for(int i = 0;i<(lines);i++ ){
        for(int j = 0;j<(colons * 2);j++){
            printf("%d",secArray[i][j]);

        }}




}

int main()
{
    while(1<2){


    int lines,cols;
    //fill The array by the user
    printf("Enter the size of the array : \n");
    printf("Number of lines : ");
    scanf("%d",&lines);
    printf("Number of colons : ");
    scanf("%d",&cols);
    int array[lines][cols];
    for(int i = 0;i<lines;i++ ){
        for(int j = 0;j<cols;j++){
            printf("Spot [%d][%d] : ",i,j),
            scanf("%d",&array[i][j]);
        }
    }
    menu :
    prt(lines,cols,array);
    printf("Tu peux choisir une operation pour executer sur votre Tableau .\n");
    printf("1-Trier Le Tableau .\n");
    printf("2-Apparence d'un nombre .\n");
    printf("3-multiples d'un nombre.\n");
    printf("4-trouver le plus grand nombre et le plus petit\n");
    printf("5.trouver les elements unique \n");
    printf("6.melanger 2 tableaux et trier les deux \n");
    printf("7.Exit\n");
    printf("-Choice : ");
    int choice ;
    scanf("%d",&choice);
    while(choice>6 || choice<1){
         printf("-Choice : ");
         scanf("%d",&choice);
    }
    switch(choice){
    case 1 :
        sort2dArray2(lines,cols, array);
        prt(lines,cols,array);
        printf("\n");
        printf("--------------------------------------------------------------\n");
        goto menu ;
            break;
    case 2 :
        appearance(3,4,array);
        printf("\n");
        printf("--------------------------------------------------------------\n");
        goto menu ;
        break;
    case 3 :
        multiplesOfnum(lines,cols,array);
        printf("\n");
        printf("--------------------------------------------------------------\n");
        goto menu ;
         break;
    case 4 :

        printf("le plus grand nombre dans votre tableau est %d : \n",Max(lines,cols,array));
        printf("le plus petit nombre dans votre tableau est %d : \n",Min(lines,cols,array));
        printf("\n");
        printf("--------------------------------------------------------------\n");
        goto menu ;
         break;
    case 5 :
       uniqueNumbers(lines,cols,array);
       printf("\n");
       printf("--------------------------------------------------------------\n");
        goto menu ;
        break;
    case 6 :
        merge2arrays(lines,cols,array);
        printf("\n");
       printf("--------------------------------------------------------------\n");
        goto menu ;
        break;
    case 7 :
        goto outOfLoop;
        break;
    default :
        printf("");
    }
    }
    outOfLoop :


    return 0;
}
