#include <stdio.h>
#include <stdlib.h>

void mostrar(int v[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",v[i][j]);
        }
    printf("\n");
    }
}

void capturar(int m[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Ingresa un valor: ");
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n");
}

int diagonal(int m[3][3]){
    int x=0;
    for(int i=0; i<3; i++){
                x=m[i][i]+x;
    }
    return x;
}

int main()
{
    int res;
    int datos[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int nueva[3][3];
    mostrar(datos);
    capturar(nueva);
    mostrar(nueva);
    res=diagonal(nueva);
    printf("\nLa suma de la diagonal principal es: %d\n",res);

    FILE *f;
    f=fopen("tablero.txt","a"); //append==agregar
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            fprintf(f,"%d ",nueva[i][j]);
        }
    fprintf(f,"\n");
    }
    fprintf(f, "\nLa suma de la diagonal principal es: %d\n\n",res);

    return 0;
}


