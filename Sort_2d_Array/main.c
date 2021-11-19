#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5][7];
    sort2dArray2(5,7,array);
    return 0;
}
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
