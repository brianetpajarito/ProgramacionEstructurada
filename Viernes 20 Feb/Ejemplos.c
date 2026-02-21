#include <stdio.h>
#include <stdlib.h>

int main(){
    //WHILE
    int x;
    int suma = 0;

    scanf("%d",&x); //Lee el numero ingresado

    while (x != 0){ //Mientras sea diferente de 0
        suma += x; //Suma el numero ingresado con el anterior
        scanf("%d",&x); //vuelve a pedir un numero
    }
    printf("Suma:%d",suma);

    //DO-WHILE (MENÚ)
    int opcion;
    do{
        printf("1. Continuar\n");
        printf("2. Salir\n");
        scanf("%d",&opcion);
    } while (opcion !=2); //Si la opción es diferente de 2, vuelve a mostrar el menú

    return 0;
}
