#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion, i, num, cal, prom, suma=0;

    do{ //Siempre mostrará el menú al menos una vez
        printf("1. Calcular promedio\n");
        printf("2. Salir\n");
        scanf("%d",&opcion);

        if (opcion==1){ //si ingresa la opcion 1 entra al programa
            printf("\n¿Cuantas calificaciones quieres ingresar?\n");
            scanf("%d",&num);

            printf("\nUsa una escala del 1 al 100\n");

            for (i=1; i<=num; i++){ //Va a preguntar las veces del numero de calificaciones ingresado
                printf("\nIngresa la calificacion %d\n",i);
                scanf("%d",&cal);

                if (cal<0 || cal>100){ // Si la calificacion no está en una escala del 0 al 100 muestra error
                    printf("ERROR: Usa una escala del 1 al 100\n");
                    i--; //resta uno al contador para que no tome en cuenta ese valor erróneo
                }
                else {
                    suma += cal;
                }
            }
            prom=suma/num;
            printf("\nTu promedio es: %d\n \n",prom);
        }
    } while (opcion !=2);
    return 0;
}

