#include <stdio.h>

int main(){
    int num,primo=1,i;
    printf("\nIngresa un numero: ");
    scanf("%d",&num); //
    if (num<=1) { //
        primo=0;
    }
    else{ // si no
        for (i=2; i*i<=num;i++){
            if(num%i==0){
                primo=0;
                break;
            }
        }
    }
    if(primo){
        printf("\nTu numero ES PRIMO\n");
    }
    else{ // si no
        printf("\nTu numero es NO ES PRIMO\n");
    }
}
