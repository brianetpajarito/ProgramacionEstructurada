#include <stdio.h>

int main(){
    char Alumno1[16]="Antonio";
    char Alumno2[16];

    //SCANF
    printf("¿Cual es tu nombre? ");
    scanf("%s",&Alumno2); //%s porque es un string
    printf("(scanf) Tu nombre es: %s", Alumno2);

    //FGETS
    printf("\n\n¿Cual es tu nombre y apellido? ");
    fgets(Alumno2,sizeof(Alumno2),stdin); //fgets( DondeLoGuardo, sizeof(Tamaño), DondeLeo)
    printf("\n(fgets) Tu nombre es: %s", Alumno2);

    //LISTA
    char lista [5][16]; //[filas][columnas]

    printf("\nLISTA\n");
    for(int i = 0; i < 3; i++) { //Pide 3 nombres
        printf("¿Cual es tu nombre? ");
        fgets(lista[i],sizeof(lista[i]),stdin); //lo guarda en la lista, donde i es la fila
    }
    printf("\n");

    for(int i = 0; i < 3; i++) { //imprime las primeras 3 filas de la lista
        printf("Tu nombre es: %s", lista[i]);
    }
    printf("\n");

    //STRLEN
    int longitud;

    for(int i = 0; i < 3; i++) { //imprime las primeras 3 filas de la lista
        longitud=strlen(lista[i]); //Strlen=longitud
        printf("\nLa longitud de %s es de %d", lista[i],longitud);
    }

    return 0;
}

