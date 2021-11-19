#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre ;
    printf("Entrer un nombre quelconque : ");
    scanf("%d",&nombre);
    while(nombre!=0){
       if(nombre % 2 != 0){
        printf("%d ",nombre);
       }
       nombre--;}

    return 0;
}
