#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=5;
    int n=5;
    int tablero[m][n];

    char Jugador1[10]="Mireya";
    char Jugador2[10];
    char linea[100];

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            tablero[i][j]='~';
        }
    }

    tablero[1][2]='B';
    tablero[3][4]='X';
    tablero[2][1]='O';

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf(" %c",tablero[i][j]);
        }
        printf("\n");
    }

    FILE *archivo;
    archivo=fopen("tablero.txt","w");

    printf("Ingresa nombre del jugador 2: ");
    fgets(Jugador2,sizeof(Jugador2),stdin);

    fprintf(archivo,"%s\n",Jugador1);
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            fprintf(archivo," %c",tablero[i][j]);
        }
        fprintf(archivo,"\n");
    }
    fprintf(archivo,"%s\n",Jugador2);
    fclose(archivo);

    FILE *archivoe;
    archivoe=fopen("tablero.txt","r");
    
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            fscanf(archivo,"%s",linea);
        }
        fscanf(archivo,"\n");
    }

    return 0;
}
