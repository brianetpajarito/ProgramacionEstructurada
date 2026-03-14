#include <stdio.h>
#include <string.h>

int main(){
    char Alumno1[16]="Antonio";
    char Alumno2[16];

    //SCANF
    printf("Cual es tu nombre? ");
    scanf("%s",&Alumno2); //%s porque es un string
    printf("(scanf) Tu nombre es: %s", Alumno2);

    //FGETS
    /*printf("\nCual es tu nombre y apellido? ");
    fgets(Alumno2,sizeof(Alumno2),stdin); //fgets( DondeLoGuardo, sizeof(Tamaño), DondeLeo)
    printf("(fgets) Tu nombre es: %s", Alumno2);*/

    //LISTA
    char lista [5][16]; //[filas][columnas]

    printf("\n\nLISTA\n");
    for(int i = 0; i < 3; i++) { //Pide 3 nombres
        printf("Cual es tu nombre? ");
        fgets(lista[i],sizeof(lista[i]),stdin); //lo guarda en la lista, donde i es la fila
    }
    printf("\n");

    for(int i = 0; i < 3; i++) { //imprime las primeras 3 filas de la lista
        printf("Tu nombre es: %s", lista[i]);
    }

    //STRLEN
    printf("\nLONGITUD\n");
    int longitud;

    for(int i = 0; i < 3; i++) { //imprime las primeras 3 filas de la lista
        longitud=strlen(lista[i]); //Strlen=longitud
        printf("\nLa longitud de %s es de %d", lista[i],longitud);
    }

    //STRCPY
    printf("\n\nCOPIA DE LISTA\n");
    char copia[16];

    for(int i = 0; i < 3; i++) { //imprime las primeras 3 filas de la lista
        strcpy(copia,lista[i]); //Strlen=longitud
        printf("%s", copia);
    }
    printf("\n");

    //STRCAT
    printf("\nCONCATENACION\n");
    char nombre[16];
    char apellido[16];

    printf("Cual es tu nombre? ");
    scanf("%s",&nombre);
    printf("¿Cual es tu apellido? ");
    scanf("%s",&apellido);

    strcat(nombre, " ");
    strcat(nombre, apellido);
    printf("Tu nombre completo es: %s", nombre);

    //STRCMP
    printf("\n\nCOMPARACION\n");

    char nombre2[16];

    printf("Cual es tu nombre? ");
    scanf("%s",&nombre);
    printf("Confirma tu nombre ");
    scanf("%s",&nombre2);

    strcmp(nombre, nombre2);
    if(strcmp(nombre,nombre2) == 0){
        printf("Los nombres SI coinciden");
    }
    else if(strcmp(nombre,nombre2)!=0){
        printf("Los nombres NO coinciden");
    }

    return 0;
}
