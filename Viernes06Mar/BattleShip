#include <stdio.h>
#include <stdlib.h>
//BATTLE SHIP
int main()
{
    int n=3;
    int m=3;

    int x1,y1,x21,y21,x22,y22;

    int jugador1[n][m];
    int jugador2[n][m];

    int bot1=777;
    int bot2[2]={555, 555};

    printf("Jugador 1\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        jugador1[i][j]=0;
        printf("%d, ",jugador1[i][j]);
        }
    printf("\n");
    }

    printf("\n");
    printf("Jugador 2\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        jugador2[i][j]=0;
        printf("%d, ",jugador2[i][j]);
        }
    printf("\n");
    }

    printf("\n\JUGADOR 1\nIngresa las coordenadas del bote 1(x,y): \n");
    scanf("%d %d",&x1,&y1);
    jugador1[x1][y1]=1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            printf("%i,",jugador1[i][j]);
        }
        printf("\n");
    }

    printf("\n\JUGADOR 2\nIngresa las coordenadas del bote 1(x,y): \n");
    scanf("%d %d",&x1,&y1);
    jugador2[x1][y1]=1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            printf("%i,",jugador2[i][j]);
        }
        printf("\n");
    }
    }
    int si=1;
    while(si=1){
        printf("\n\JUGADOR 1\nIngresa las coordenadas del bote 2(x1,y1): \n");
        scanf("%d %d",&x21,&y21);
        
        if(x1==x21 && y1==y21){
            printf("ERROR: invadiste el lugar del Barco 1");
            si=1;
        }
        else{
            si=0;
        }
    }
    
    printf("\nIngresa las coordenadas del bote 2(x2,y2): \n");
    scanf("%d %d",&x22,&y22);
    if((x1==x22 && y1==y22)||(x21==x22 && y21==y22)){
        printf("ERROR: coordenada repetida");
    }
    else{
        
    }

    jugador1[x21][y21]=1;
    jugador1[x22][y22]=1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n;j++){
            printf("%i,",jugador1[i][j]);
        }
        printf("\n");
    }


    /*jugador1[2][1]=bot1;
    jugador1[0][0]=bot2;
    jugador1[0][1]=bot2;*/

    return 0;
}

