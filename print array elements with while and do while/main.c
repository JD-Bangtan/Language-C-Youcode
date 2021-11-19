#include <stdio.h>
#include <stdlib.h>

int main()
{
    //print array with while loops
    int Array[] = {2,5,9,12,120,90};
    int Size = 0;
       //While
    while(Size<6){
     printf("%d ",Array[Size]);
     Size++;
    }
    //do-while
    printf("\n");
    Size = 0;
    do{
     printf("%d ",Array[Size]);
     Size++;
    }while(Size<6);
    return 0;
}
