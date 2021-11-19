#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c ;
    int size ;
    //initialize the array
    printf("How much numbers you want to enter : ");
    scanf("%d",&size);
    while(size<=0 || size>20){
      printf("How much numbers you want to enter : ");
      scanf("%d",&size);
    }
    int array[size] ;

    for(int i = 0;i<size;i++){
        printf("[%d] : ",i);
        scanf("%d",&array[i]);
    }
    // Sorting
    for(int i = 0;i<size;i++){
        for(int j = 0 ;j<size-1;j++){
            if(array[j]>array[j+1]){
              c = array[j];
              array[j]= array[j+1];
              array[j+1] = c;
            }
        }
    }
    printf("the array after sorting : ");
    for(int i = 0;i<size;i++){
           printf("%d ",array[i]);
        }

    return 0;
}
