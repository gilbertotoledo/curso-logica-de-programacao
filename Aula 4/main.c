#include <stdio.h>


int main(){
    int valorA;
    int valorB;

    printf("Informe um valor: ");
    scanf("%i",&valorA);

    printf("Informe outro valor: ");
    scanf("%i",&valorB);

    if( valorA > valorB ){
        printf("Primeiro valor e o maior");
    }else{
        printf("Segundo valor e o maior");
    }
    return 0;
}
