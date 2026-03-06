//Código 1:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t1,t2;
    float temp[24]; //Apuntador
    temp[0]=20.5;
    temp[1]=19.2;
    int si;
    printf("Direccion de memoria de dos enteros: %d, %d",&t1,&t2);
    printf("\nDireccion de temp[24]: %d",temp); //Imprime la dirección de memoria porque al colocarle la [24] temp se convierte en un apuntador
    printf("\nDireccion de memoria de temp[24]: %d",&temp[23]);
    
    printf("\n\ntemp[24]: %f",temp[23]);
    printf("\ntemp[0]: %f",temp[0]);
    printf("\ntemp[1]: %f",temp[1]);
    
    printf("\n\nDireccion de memoria de si %i\n",&si);

    return 0;
}

//Código 2:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4;
    float temp[n];
    temp[1]=19.2;

    for (int k=0; k<n; k++){
        printf("Temp %.2f\n",temp[k]);
    }
    for (int i=0; i<n; i++){
        printf("Ingresa el valor de la Temperatura %i: ",i+1);
        scanf("%f",&temp[i]);
    }
    for (int j=0; j<n; j++){
        printf("\nTemp %.2f",temp[j]);
    }

    return 0;
}
