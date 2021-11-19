#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age[3][5] = {
            {4,8,9,7,9},
            {7,9,8,89,90},
            {3,4,18,23,45}
              } ;
  int i = 0;
  int j = 0;
  while(i<3){
    while(j<5){
        printf("%d ",age[i][j]);
        j++;
    }
    j = 0;
    i++;
    printf("\n");
  }
