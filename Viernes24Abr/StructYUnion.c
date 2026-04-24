#include <stdio.h>
#include <stdlib.h>

struct alumne{
    char nombre[20];
    float cal;
    int act;
    int derecho;
};

struct grupo{
    char nombre[20];
};

union dato{
    int entero;
    float decimal;
};

int main()
{
    struct alumne pepe;
    struct grupo si[3];

    printf("Nombre: ");
    fgets(pepe.nombre,30,stdin);

    printf("Calificacion: ");
    scanf("%f",&pepe.cal);

    printf("No. de actividades: ");
    scanf("%d",&pepe.act);

    printf("Derecho: ");
    scanf("%d",&pepe.derecho);
    getchar();

    printf("\nDATOS CAPTURADOS: \n");
    printf("Nombre: %s",pepe.nombre);
    printf("Calificacion: %.2f \n",pepe.cal);
    printf("No. de actividades: %d \n",pepe.act);
    printf("Derecho: %d \n\n",pepe.derecho);

    for(int i=0;i<3;i++){
        printf("Nombre %d: ",i+1);
        fgets(si[i].nombre,30,stdin);
    }

    union dato x;
    x.entero=10;
    printf("\nUnion: %d\n",x.entero);

    return 0;
}
