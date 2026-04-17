#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b){
    return a+b;
}

void cambiar(int x){
    x=100;
}

void mostrar(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d",v[i]);
    }
}

void mostrarMatriz(int m[2][3]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a,b,c;
    printf("Ingresa dos numeros:\n");
    scanf("%d %d", &a, &b);
    c=suma(a,b);
    printf("El resultado de la suma de %d+%d es: %d\n",a,b,c);
    cambiar(c);
    printf("\nProcedimiento cambio de valor: %d\n",c);

    int datos[5]={1,2,3,4,5};
    printf("\nArreglo: ");
    mostrar (datos,5);

    printf("\n\nMatriz: \n");
    int si[2][3]={{1,2,3},{4,5,6}};
    mostrarMatriz(si);

    return 0;
}
