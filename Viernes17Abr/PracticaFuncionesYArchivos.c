#include <stdio.h>
#include <stdlib.h>

void capturar(int v[], int n){
    for(int i=0; i<n; i++){
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\n");
}

void mostrar(int v[], int n){
    printf("Los numeros que ingresaste son: ");
    for(int i=0; i<n; i++){
        printf("%d  ",v[i]);
    }
    printf("\n");
}

int filtrar(int origen[], int destino[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(origen[i]%2!=0){
            destino[j]=origen[i];
            j++;
        }
    }
    return j;
}

void mostrarimpares(int v[], int n){
    printf("\nSe encontraron %d numeros impares: ", n);
    for(int i=0; i < n; i++){
        printf("%d  ", v[i]);
    }
    printf("\n");
}

int main()
{
    int num[6];
    int impares[6];

    printf("Ingresa 6 numeros enteros:\n");
    capturar(num,6);
    mostrar(num,6);
    int numimpares=filtrar(num,impares,6);
    mostrarimpares(impares,numimpares);
    
    //ARCHIVO (solo guarda impares)
    FILE *f;
    f = fopen("resultado.txt","w");

    fprintf(f, "Se encontraron %d numeros impares: ", numimpares);
    for(int i=0; i < numimpares; i++){
        fprintf(f, "%d  ", impares[i]);
    }
    fprintf(f,"\n");

    fclose(f);

    return 0;
}
