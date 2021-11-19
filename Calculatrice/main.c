#include <stdio.h>
#include <stdlib.h>

int main()
{

   double num1 ;
   double num2 ;
   double Result ;
   char Choice2[9];
   while(1<2){
    printf("Choose what you want to do : \n");
    printf("1-Operations  2-Equations  \n");
    int choice5;
    scanf("%d",&choice5);
    while(choice5>2 && choice5<1){
        printf("Invalid number !! Try Again");
        scanf("%d",&choice5);
    }
    if(choice5 == 2){
        int choice6;
        place2 :
        printf("1-Equation of first degree  2-Equation of second degree \n ");
        scanf("%d",&choice6);
        switch(choice6){
        case 1 :
            printf("We know that every equation have the shape of aX + B : \n");
            double a , b;
            printf("Enter b : ");
            scanf("%lf",&b);
            place :
            printf("Enter a  : ");
            scanf("%lf",&a);
            if(a==0){
            printf("We can't devide by 0 in Math,Try Again : \n");
            goto place ;
           }
            printf("%lf",-b/a);
          break;
        case 2 :

            break;
        default :
            printf("Wrong choice !! Try Again \n");
            goto place2;
        }

    }else{
    printf("Enter your number : ");
    scanf("%lf",&num1);
    printf("Choose the operation  : \n");
    int choice ;
    printf("1.'+'  2.'-'  3.'/'  4.'x'  \n ");
    scanf("%d",&choice);
    while(choice>4 || choice<1){
        printf("Invalid number , Try Again !! \n");
        printf("1.'+'  2.'-'  3.'/'  4.'x'  \n ");
        scanf("%d",&choice);
    }
    jawad :
    printf("Enter the second number : ");
    scanf("%lf",&num2);
    switch(choice){
    case 1 :
      Result = num1 + num2;
         break;
    case 2:
        Result = num1 -num2;
       break;
     case 3 :
         if(num2 == 0){
            printf("We can't devide by 0 in Math,Try A gain : ");
            goto jawad ;//Back to a certain point in the while
         }
      Result = num1 / num2;
         break;
    case 4:
        Result = num1 * num2;
       break;
     default :
       printf("Try Again");
    }
    while(1<2){
     menuAgain :
     printf("1-If you want to See your result press Exit\n") ;
     printf("2-If you want to enter another number press Continue\n");
     printf("3-If you want to Change the type of counting press Change\n");
     printf("-Choice : ");
     scanf("%s", Choice2);
     if(strcmp(Choice2,"Exit")==0 || strcmp(Choice2,"exit")==0){
        break;
     }else if (strcmp(Choice2,"Continue")==0 || strcmp(Choice2,"continue")==0){// scanf in string is without &
      printf("Enter the  number : ");

      double newNum ;
      scanf("%lf",&newNum);
      switch(choice){
    case 1 :
      Result += newNum;
         break;
    case 2:
        Result -= newNum ;
       break;
     case 3 :
      Result /=newNum ;
         break;
    case 4:
        Result *=newNum ;
       break;
     default :
       printf("Try Again");
    }
     }else if(strcmp(Choice2,"Change")==0 || strcmp(Choice2,"change")==0){
       printf("Choose the operation  : \n");
       printf("1.'+'  2.'-'  3.'/'  4.'x'  \n ");
       scanf("%d",&choice);
       while(choice>4 || choice<1){
        printf("Invalid number , Try Again !! \n");
        printf("1.'+'  2.'-'  3.'/'  4.'x'  \n ");
        scanf("%d",&choice);
    }
       printf("Enter the  number : ");
      double newNum ;
      scanf("%lf",&newNum);
      switch(choice){
    case 1 :
      Result += newNum;
      goto menuAgain ;
         break;
    case 2:
        Result -= newNum ;
        goto menuAgain ;
       break;
     case 3 :
      Result /=newNum ;
      goto menuAgain ;
         break;
    case 4:
        Result *=newNum ;
        goto menuAgain ;
       break;
      default :
       printf("Try Again");
     }
     }
     else{
      printf("Are you stupid !! i said write continue or Exit");
     }
     }
    printf("Your result  is : %lf ",Result);
    break;
    }
    break;
   }
    return 0;
}
