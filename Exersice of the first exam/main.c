#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0 ;int index = 0;
    int countOf5 = 0;int countOf3 = 0;

    printf("Enter how much numbers you want to enter  : \n");
    scanf("%d",&size);
    int numbers[size];
    while( index < size){

        printf("Enter a number : ");
        scanf("%d",&numbers[index]);
        if(numbers[index]==5 ){
            countOf5 ++;
        }else if (numbers[index]== 3){
          countOf3 ++ ;
        }
       index = index + 1;

    }

      printf("%d ",countOf3);
      printf("%d ",countOf5);


    return 0;
}
