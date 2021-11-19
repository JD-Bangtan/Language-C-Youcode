#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ;
    printf("Enter your age : ");
    scanf("%d",&age);
    // if peut executer son collades avec une seul instruction
    if(age > 0 && age <3){
       printf("bebe");
    }else if(age >= 3 && age <15){
       printf("Enfant");
    }else if(age >= 15 && age <20){
       printf("Adolescent");
    }else if(age >= 20 && age <35){
       printf("Jeune");
    }else if(age >= 35 && age <65){
       printf("Mature");
    }else{
       printf("Vieux");
    }


    return 0;
}
