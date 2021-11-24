#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <ctype.h>
    char cin_containers[50][9];
    char name_containers[50][9];
    double montants[50];int n = 0;
    int choice;

int main()
{
 printf("\t\tWELCOME TO OUR BANK :");
 while(1<2){
 again :
 printf("\n\t\t\t\t1-Add one account\n\t\t\t\t2-Add multiple accounts");
 printf("\n\t\t\t\t3-Operations\n\t\t\t\t4-Affichage\n\t\t\t\t5-Search by cin");
 printf("\n\t\t\t\t6-Fidelisation\n\t\t\t\t0-Quitter l'application");
 printf("\n-Choice :");
 scanf("%d",&choice);
 while(choice<0 || choice > 6){
 printf("\n-Choice :");
 scanf("%d",&choice);
 }
 if(choice == 1){
   for(int i = n;i<n + 1;i++){
        printf("Entrer votre CIN  : ");
        getchar();
        scanf("%[^\n]s",cin_containers[i]);
        while(cin_checking(cin_containers[i])!=9){
         printf("Entrer votre CIN : ");
        getchar();
        scanf("%[^\n]s",cin_containers[i]);
        }
        printf("\n");
        printf("Entrer votre nom : ");
        getchar();
        scanf("%[^\n]s",name_containers[i]);
        printf("\n");
        printf("Entrer votre montant en Dhs  : ");
        scanf("%lf",&montants[i]);
    }
  n = n + 1;
 }else if(choice == 2){
        int size ;
        printf("Combien de comptes voulez-vous ajouter : ");
        scanf("%d",&size);
         for(int i = n;i<size + n;i++){
        printf("Entrer votre CIN: ");
        getchar();
        scanf("%[^\n]s",cin_containers[i]);
        while(cin_checking(cin_containers[i])!=9){
        printf("Entrer votre CIN: ");
        getchar();
        scanf("%[^\n]s",cin_containers[i]);
        }
        printf("\n");
        printf("Entrer votre nom : ");
        getchar();
        scanf("%[^\n]s",name_containers[i]);
        printf("\n");
        printf("Entrer votre montants en DHs  : ");
        scanf("%lf",&montants[i]);
    }
   n = n + size ;

 }else if(choice == 3){
  if(n == 0){
    printf("There is no accounts Yet .");
    goto again;
  }
  operationMenu:
  printf("1-Retrait\t2-Depot\t3-Menu Principal ");
  printf("\n-Choice : ");
  scanf("%d",&choice);
  char cin[9] ;double money ;
  switch(choice){
  case 1 :
      cinAgain :
      printf("\nEnter Your cin : ");
      getchar();
      scanf("%[^\n]s",cin);
      printf("\n%s",cin);
      for(int i = 0;i<n;i++){
        if(strcmp(cin,cin_containers[i]) == 0){
           printf("-Votre montant est : %.2f",montants[i]);
           printf("\nHow much you want to take :");
           scanf("%lf",&money);
           while(money>montants[i]){
            printf("\n-You don't have enough money .");
            printf("\nHow much you want to take :");
            scanf("%lf",&money);
           }
           montants[i] -= money;
           printf("\nYour balance After the op is : %.2f Dhs",montants[i]);
           break;
        }else if(i==n-1){
           printf("-We couldn't find this cin .");
           printf("n\1-Try Again\t2-Back to the menu");
           printf("-Choice : ");
           scanf("%d",&choice);
           while(choice<0 && choice>2){
            printf("\nInvalid choice.Try Again");
            printf("-Choice : ");
           scanf("%d",&choice);
           }
           switch(choice){
          case 1 :
            goto cinAgain;
               break;
          case 2 :
            goto operationMenu;
            break;

           }
        }
      }
      goto operationMenu;
      break;
  case 2 :
      printf("\nEnter Your cin : ");
      getchar();
      scanf("%[^\n]s",cin);
      printf("\n%s",cin);
      for(int i = 0;i<n;i++){
        if(strcmp(cin,cin_containers[i]) == 0){
           printf("Votre Montant est : %.2f Dhs",montants[i]);
           printf("\nHow much you want to Add :");
           scanf("%lf",&money);
           montants[i] += money;
           printf("\nVotre Montant apres l'operation est  : %.2f Dhs",montants[i]);
           break;
        }else if(i==n-1){
           printf("-Nous n'avons pas pu trouver votre cin .");
           printf("n\1-Réessayer\t2-Retour au menu");
           printf("-Choice : ");
           scanf("%d",&choice);
           while(choice<0 && choice>2){
            printf("\nChoix invalide. Réessayer");
            printf("-Choix : ");
           scanf("%d",&choice);
           }
           switch(choice){
          case 1 :
            goto cinAgain;
               break;
          case 2 :
            goto operationMenu;
            break;
           }
        }
      }
      goto operationMenu;
      break;
  case 3 :

    break;
  }
 }else if(choice == 4){
  if(n == 0){
    printf("There is no accounts Yet .");
    goto again;
  }
  affichageMenu:
  printf("\n\t\t\t\t1-Afficher par un ordre ascendants");
  printf("\n\t\t\t\t2-Afficher par un ordre descendants");
  printf("\n\t\t\t\t3-Afficher par un ordre ascendants a partir un chiffre");
  printf("\n\t\t\t\t4-Afficher par un ordre descendants a partir un chiffre");
  printf("\n\t\t\t\t5-Menu principal .");
  printf("\n-Choice : ");
  scanf("%d",&choice);
  switch(choice){
  case 1 :
      affichageAscendant();
      goto affichageMenu;
      break;
  case 2 :
    affichageDescendant();
    for(int i = 0;i<n;i++){
        printf("\n-CIN : %s\t ",cin_containers[i]);
        printf("\t-Montant : %.2f\t ",montants[i]);
      }
      goto affichageMenu;
    break;
  case 3 :
    sort_with_number();
    goto affichageMenu;
    break;
  case 4 :
    sort_with_number2();
    goto affichageMenu;
    break;
  case 5 :
    break;
    }
 }else if(choice==5){
   if(n == 0){
    printf("There is no accounts Yet .");
    goto again;
  }
   cin_Search();
 }else if(choice == 6){
  if(n == 0){
    printf("There is no accounts Yet .");
    goto again;
  }
  fidelisation();
 }else if(choice == 0){
  break;
 }
 }

    return 0;
}
void affichageAscendant(){
double montants_temp ;
char cin_temp[9];
for(int i = 0;i<n;i++){
 for(int j = 0;j<n-1;j++){
    if(montants[j]>montants[j+1]){
              montants_temp = montants[j];
              montants[j]= montants[j+1];
              montants[j+1] = montants_temp;
              strcpy(cin_temp,cin_containers[j]);
              strcpy(cin_containers[j],cin_containers[j+1]);
              strcpy(cin_containers[j+1],cin_temp);
    }}}
    for(int i = 0;i<n;i++){
        printf("\n-CIN : %s\t ",cin_containers[i]);
        printf("\t-Montant : %.2f\t ",montants[i]);
      }
    }
void affichageDescendant(){
double montants_temp ;
char cin_temp[9];
for(int i = 0;i<n;i++){
 for(int j = 0;j<n-1;j++){
    if(montants[j]<montants[j+1]){
              montants_temp = montants[j];
              montants[j]= montants[j+1];
              montants[j+1] = montants_temp;
              strcpy(cin_temp,cin_containers[j]);
              strcpy(cin_containers[j],cin_containers[j+1]);
              strcpy(cin_containers[j+1],cin_temp);}}
              }


              }

void sort_with_number(){
affichageAscendant();
double balance ;
printf("-Entrer un chiffre : ");
scanf("%lf",&balance);
while(balance>montants[n-1]){
printf("\nThere is no account Bigger than this . Try Again");
printf("\n1-Ressayer\t2-Menu d'Affichage");
printf("\n-Choice : ");
scanf("%d",&choice);
if(choice==1){
printf("\n-Entrer un chiffre : ");
scanf("%lf",&balance);
}else if(choice == 2){
break ;
}else{

}
}
for(int i = 0;i<n;i++){
   if(montants[i]>=balance ){
    printf("\n-CIN : %s\t ",cin_containers[i]);
    printf("\t-Montant : %.2f\t ",montants[i]);
   }
}
}
void sort_with_number2(){
affichageDescendant();
double balance ;
printf("-Entrer un chiffre : ");
scanf("%lf",&balance);
while(balance<montants[n-1]){
printf("\nThereis no account Smaller than this . Try Again");
printf("\n1-Ressayer\t2-Menu d'Affichage");
printf("\n-Choice : ");
scanf("%d",&choice);
if(choice==1){
printf("\n-Entrer un chiffre : ");
scanf("%lf",&balance);
}else if(choice == 2){
break ;
}else{

}

}
for(int i = 0;i<n;i++){
   if(montants[i]<=balance ){
    printf("\nCIN : %s\t ",cin_containers[i]);
    printf("\nBalance : %.2lf\t ",montants[i]);
   }
}
}
void cin_Search(){
char cin[9];
TryAgain2 :
printf("Entrer votre cin : ");
scanf("%s",cin);
for(int i = 0;i<n;i++){
   if(strcmp(cin,cin_containers[i])==0){
    printf("\n-Votre nom est :  %s ",name_containers[i]);
    printf("\n-Votre Montant est : %.2lf Dhs",montants[i]);
    break;
   }else if(i == n-1){
    printf("We couldn't find your account  . Try Again ");
    TryAgain :
    printf("\n1-Try Again\t2-Back to the main Menu");
    printf("-Choice : ");
    scanf("%d",&choice);
    switch(choice){
    case 1 :
     goto TryAgain2;
       break;
    case 2 :
        break;
    default :
     printf("Invalid choice try again ");
     goto TryAgain ;
    }
   }
}
}
void fidelisation(){
 affichageDescendant();
 printf("%d",n);
 double thirdM ;
 for(int i = 0;i<n;i++){
    if(montants[i]<montants[0] && montants[i]-montants[i+1]>0){
        thirdM = montants[i+1];
        break;
    }
 }
 if(n>3){
   for(int i=0;i<n;i++){
     if(montants[i]>=thirdM){
    printf("\n-We added 1.3 to %s account : %.2lf",cin_containers[i],montants[i]);
    montants[i] += (montants[i]*1.3)/100;
    printf("\nThe montant become %.2lf ",montants[i]);
     }}
 }else if(n<=3){
   for(int i = 0;i<n;i++){
    printf("\n-We added 1.3 to %s account : %.2lf",cin_containers[i],montants[i]);
    montants[i] += (montants[i]*1.3)/100;
    printf("\nThe montant become %.2lf ",montants[i]);
   }
 }
 }
int cin_checking(char cin[]){
 int count = 0;
 if(strlen(cin)== 8){
    count++;
 }
 for(int i = 0;i<strlen(cin);i++){
    if(i<=1 && isalpha(cin[i])){
       count++;
     }else if(i>1 && isdigit(cin[i])){
        count++;
     }
 }
 return count;
}
