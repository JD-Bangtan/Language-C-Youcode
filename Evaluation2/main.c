#include <stdio.h>
#include <stdlib.h>
int num ;
int main()
{

    pair();
    printStars();
    return 0;
}
void pair(){
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num % 2 == 0){
     printf("Enter a number : ");
     scanf("%d",&num);
    }
}
void printStars(){
for(int i = 1 ;i<=num;i++){
        for(int k = 1;k<num-i;k++){
         printf(" ");
        }
        for(int j = 1;j<=i;j++){
         printf("*");
        }
        if(i != 1){
          for(int e = 1;e<=i;e++){
         printf("*");
        }
        }

      printf("\n");
    }

}
