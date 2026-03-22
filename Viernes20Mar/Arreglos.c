#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lista[4][10];

    char Arreglo[5];
    printf("Apuntador de Arreglo[5]: %d\n\n",Arreglo); //Apuntador: hace referencia a donde comienza un arreglo (la dirección)
    printf("Fuera de rango del arreglo: %d\n\n",Arreglo[6]); //fuera de rango, imprime 0

    printf("Direccion de cada posicion del arreglo:\n");
    for (int i=0; i<5; i++){
        printf("%d\n",&Arreglo[i]); //imprime la dirección de memoria de cada índice del arreglo
    }
    printf("\n");

    for (int i=0; i<4; i++){
    printf("Ingresa tu nombre: ");
    fgets(lista[i],sizeof(lista[i]),stdin);
    }

    printf("\nTU NOMBRE COMPLETO ES:\n");
    for (int i=0; i<4; i++){
        printf("%s",lista[i]);
    }

    printf("\n%d\n",lista);

    printf("\nLa direccion de memoria de cada dato es:\n");
    for (int i=0; i<4; i++){
        printf("%d -> %s",&lista[i],lista[i]);
    }

    return 0;
}
