#include <stdio.h>
#include <stdlib.h>
//BATTLE SHIP
int main()
{
    //TAMAÑO DE LA MATRIZ
    int n=3; //filas
    int m=3; //columnas

    int ax1,ay1,ax21,ay21,ax22,ay22; //variables para guardar coordenadas del JUGADOR 1
    int bx1,by1,bx21,by21,bx22,by22; //variables para guardar coordenadas del JUGADOR 2

    int jugador1[n][m];
    int jugador2[n][m];

    int bot1=777; //Tamaño del bote 1 (1 coordenada)
    int bot2[2]={555, 555}; //Tamaño del bote 2 (2 coordenadas)

    //INICIALIZACIÓN DE LAS MATRICES EN 0
    //Impresión de la matriz del jugador 1:
    printf("Jugador 1\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        jugador1[i][j]=0;
        printf("%d, ",jugador1[i][j]);
        }
    printf("\n");
    }
    //Impresión de la matriz del jugador 2:
    printf("\n");
    printf("Jugador 2\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        jugador2[i][j]=0;
        printf("%d, ",jugador2[i][j]);
        }
    printf("\n");
    }

    //COLOCAR EL BARCO 1
    //Jugador 1:
    printf("\n\JUGADOR 1\nIngresa las coordenadas del bote 1(x,y): \n");
    scanf("%d %d",&ax1,&ay1);
    jugador1[ax1][ay1]=1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            printf("%i,",jugador1[i][j]);
        }
        printf("\n");
    }
    //Jugador 2:
    printf("\n\JUGADOR 2\nIngresa las coordenadas del bote 1(x,y): \n");
    scanf("%d %d",&bx1,&by1);
    jugador2[bx1][by1]=1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            printf("%i,",jugador2[i][j]);
        }
        printf("\n");
    }

    //COLOCAR EL BARCO 2
    int si=1; //variable para salir del bucle while cuando la coordenada es correcta
    //Jugador 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
    //Coordenada 1:
    while(si==1){
        printf("\n\nJUGADOR 1\nIngresa las coordenadas del bote 2 (x1,y1):\n");
        scanf("%d %d",&ax21,&ay21);

        if(ax1==ax21 && ay1==ay21){ //Validación de coordenada repetida
            printf("\nERROR: invadiste el lugar del Barco 1");
        }
        else{ //Si no se repite la coordenada sale del bucle
            si=0;
        }
    }
    //Coordenada 2:
    si=2; //reutilización de variable para entrar al bucle 2
    while(si==2){
        printf("\nIngresa las coordenadas del bote 2 (x2,y2):\n");
        scanf("%d %d",&ax22,&ay22);

        if((ax1==ax22 && ay1==ay22)||(ax21==ax22 && ay21==ay22)){ //validación de coordenada repetida
            printf("\nERROR: coordenada repetida");
        }
        else if( /* AQUÍ VA LA CONDICIÓN(VALIDACIÓN) PARA QUE LA COORDENADA 2 ESTÉ JUNTO A LA COORDENADA 1 */){
            //Esta parte se puede fusionar con el if de arriba por medio de una or ('||') ya que imprime el mismo error y NO cambia a variable 'si'
        }
        else {
            si=3;
        }
    }

    //Coloca '1' en la ubicación del barco 2
    jugador1[ax21][ay21]=1;
    jugador1[ax22][ay22]=1;
    //Imprime la matriz completa del Jugador 1
    printf("\n PARTIDA JUGADOR 1\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            printf("%i,",jugador1[i][j]);
        }
        printf("\n");
    }

    jugador1[ax1][ay1]=bot1;
    jugador1[ax21][ay21]=bot2;
    jugador1[ax22][ay22]=bot2;

    //Ya que completemos la validación del barco 2 para el jugador 1, copiamos y pegamos para el jugador 2.

    return 0;
}

