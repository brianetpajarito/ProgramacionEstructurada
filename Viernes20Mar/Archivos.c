#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=5;
    int n=5;
    int tablero[m][n];

    char Jugador1[10]="Mireya";
    char Jugador2[10];

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            tablero[i][j]='~';
        }
    }

    tablero[1][2]='B';
    tablero[3][4]='X';
    tablero[2][1]='O';

    printf("Simulando tablero de juego...\n");

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf(" %c",tablero[i][j]);
        }
        printf("\n");
    }

    FILE *archivo;
    archivo=fopen("tablero.txt","w");

    printf("\nIngresa nombre del jugador 2: ");
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

    char LeerNom1[10];
    char LeerNom2[10];
    char linea[100];

    fgets(LeerNom1, sizeof(LeerNom1), archivoe);
    printf("\n--- Nombres extraidos del archivo ---\n");
    printf("Jugador 1: %s", LeerNom1);

    for(int i=0; i<m; i++) {
        fgets(linea, sizeof(linea), archivoe); // Solo leemos y sobrescribimos "linea" para avanzar
    }

    fgets(LeerNom2, sizeof(LeerNom2), archivoe);
    printf("Jugador 2: %s", LeerNom2);

    return 0;
}
