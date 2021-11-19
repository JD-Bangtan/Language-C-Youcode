#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number ;
    printf("Enter the number : ");
    scanf("%lf",&number);
    printf("%f",number);
    if(number>0){
       printf("the number is positive");

    }else if(number<0){
       printf("the number is negative");
    }else{
        printf("the number is null");
    }
    return 0;
}
