#include <stdlib.h>

int main()
{
    int nombre ;
    printf("Entrer un nombre quelconque : ");
    scanf("%d",&nombre);
    int Dern_Somme = 0;
    while(nombre!=0){
      Dern_Somme = Dern_Somme + nombre;
      nombre = nombre - 1;
    }
    printf("%d",Dern_Somme);
    return 0;
}
