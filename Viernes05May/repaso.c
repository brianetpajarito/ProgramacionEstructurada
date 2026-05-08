#include <stdio.h>
#include <stdlib.h>

int f_double(int x){
    return x=x*2;
}

int f_triple(int *y){
    return *y=*y*3;
}

int main()
{
    int a;
    printf("Dame un No. del 1 al 100:");
    scanf("%d",&a);
    printf("El doble es: %d\n",f_double(a));
    printf("Valor original:%d\n\n",a);
    printf("El triple es: %d\n",f_triple(&a));
    printf("Nuevo valor:%d\n\n",a);

    int x=5;
    int *p;
    p=&x;
    printf("%d\n",x);
    printf("%d\n",p);
    printf("%d \n",*p);

    int *v;
    v=(int*)malloc(5*sizeof(int));
    printf("%d\n",v);

    return 0;
}

