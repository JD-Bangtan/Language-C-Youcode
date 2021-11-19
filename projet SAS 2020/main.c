#include <stdio.h>
char presidents[5][100];
char Electors[10][8];
int array[5][2] = {
                  {1,0},
                  {2,0},
                  {3,0},
                  {4,0},
                  {5,0}
                  };

int main(){
   printf("\t\t\t\t\tWELCOME TO THE ELECTION CENTER  \n ");
   printf("First Add the presidents . \n");
   addPresidents();
   printf("Now the election going to starts . \n");
   electionPhase1();
   startOver();
   arrayOfcounting();
   electionPhase2();
   startOver();
   electionPhase3();




return 0 ;
}
//
void addPresidents(){
int index = 0;
while(index<5){
printf("Enter president name  : ");
getchar();
scanf("%[^\n]s",presidents[index]);
index++;
}
}
//
void electionPhase1(){
int index = 0;int count = 0;
while(1<2){
	printf("Enter your CIN : ");
	getchar();
    scanf("%[^\n]s",Electors[index]);
    printPresidentsList();
    int choice ;
    printf("Choose a president : ");
    scanf("%d",&choice);
    array[choice-1][1]++;
    index++;
    if(index==10){
        break;
    }
    }
    for(int i = 0;i<5;i++){
        for(int j = 1;j<2;j++){
           if(array[i][j] < 1.5){
            strcpy(presidents[array[i][j-1]-1],"-") ;
           }
        }
    }
    printPresidentsList();
}
//
void printPresidentsList(){
    for(int loop=0; loop<5; loop++)
	{
		printf("[%2d]: %s\n",loop+1,presidents[loop]);
	}
}
//
void arrayOfcounting(){
for(int i = 0;i<5;i++){
        for(int j = 0;j<2;j++){
          printf("[%d][%d] : %d ",i,j,array[i][j]);
          }
          printf("\n");
        }
}
//
void electionPhase2(){
int choice2 ;
    for(int i = 0;i<10;i++){

    printf("elector with the CIN %s vote again : ",Electors[i]);
    scanf("%d",&choice2);

    array[choice2-1][1]++;

    }
    int min =100;int smallestPresident ;
	for(int i = 0;i<5;i++){
        for(int j = 1;j<2;j++){
          if(array[i][j] < min && strcmp(presidents[array[i][j-1]-1],"-") !=0) {

            min = array[i][j] ;
            smallestPresident = array[i][j-1];

          }
        }
    }
	strcpy(presidents[smallestPresident-1],"-");
	printPresidentsList();
}
void electionPhase3(){
    int choice2 ;
    for(int i = 0;i<10;i++){

    printf("elector with the CIN %s vote again : \n",Electors[i]);
    scanf("%d",&choice2);
    array[choice2-1][1]++;
    }
    int max = 0;int Winner ;
    for(int i = 0;i<5;i++){
        for(int j = 1;j<2;j++){
           if(array[i][j] > max && strcmp(presidents[array[i][j-1]-1],"-") !=0) {

            max = array[i][j] ;
            Winner = array[i][j-1];
        }}

    }

   printf("And the winner is ........... %s ",presidents[Winner-1]);
}
void startOver(){
   for(int i = 0;i<5;i++){
        for(int j = 1;j<2;j++){
         array[i][j] = 0;

        }
    }

}
