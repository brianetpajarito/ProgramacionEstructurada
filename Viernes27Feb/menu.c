#include <stdio.h>
#include <stdlib.h>

int calculadora(int op, int m, int n){
    int res;
    if(op==1){
        res=m+n;
        printf("\n%d + %d = %d\n",m,n,res);
    }
    else if(op==2){
        res=m-n;
        printf("\n%d - %d = %d\n",m,n,res);
    }
}

int resta(int x, int y){
    return x-y;
}

int main()
{
    int opP,opC,x,y,res;

    do{
    printf("Selecciona una opcion:\n");
    printf("a) Analizar numero \nb) Calculadora \nc) Salir\n"); //Menú
    scanf("%c",&opP);

    switch(opP)
    {
        case 'a': //Analizar número
            printf("\nANALIZAR NUMERO\n");
            printf("Ingresa un numero entero:\n");
            scanf("%d",&x);
            if(x%2==0){
                printf("Es par\n");
            }
            else {
                printf("Es impar\n");
            }
            break;
        case 'b': //Calculadora
            printf("\nCALCULADORA\n");
            printf("Ingresa dos numeros:\n");
            scanf("%d \n %d",&x,&y);

            printf("\nSelecciona una operacion:\n");
            printf("1.Sumar \n2.Restar \n3.Regresar\n"); //Menú CALCULADORA
            scanf("%d",&opC);

            switch(opC)
            {
            case 1:
                calculadora(opC,x,y);
                break;
            case 2:
                calculadora(opC,x,y);
                break;
            case 3:
                printf("REGRESAR\n");
                break;
            default:
                printf("////Opcion invalida////\n");
                break;
            }

            break;
        case 'c': //Salir
            printf("BYE BYE\n");
            return 0;
        default:
            printf("Opcion invalida\n");
            break;
    }
    printf("\n////////////////MENU//////////////////\n");
    } while(opP!=3);
    return 0;
}

