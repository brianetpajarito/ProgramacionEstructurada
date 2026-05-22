#include <stdio.h>

int main()
{
    char ch='A';
    signed char sch=-10;
    unsigned char unch=111;

    int a=-2222;
    unsigned int b=3333;
    short int c=-444;
    unsigned short d=555;
    long e=-6767;
    unsigned long f=7777;
    long long g=-888888;
    unsigned long long h=999999;
    float i=3.14;
    double j=3.141592;
    long double k=3.1415926535;

    printf("TIPOS DE DATOS EN C \n\n");
    printf("char: %c, %lu\n",ch,&ch);
    printf("signed char: %d, %lu\n",sch,&sch);
    printf("unsigned char: %u, %lu\n",unch,&unch);
    printf("int: %d, %lu\n",a,&a);
    printf("unsigned int: %u, %lu\n",b,&b);
    printf("short int: %d, %lu\n",c,&c);
    printf("unsigned short: %u, %lu\n",d,&d);
    printf("long: %ld, %lu\n",e,&e);
    printf("unsigned long: %lu, %lu\n",f,&f);
    printf("long long: %lld, %lud\n",g,&g);
    printf("unsigned long long: %llu, %lu\n",h,&h);
    printf("float: %.2f, %lu\n",i,&i);
    printf("double: %lf, %lu\n",j,&j);
    printf("long double: %Lf, %lu\n",k,&k);
    
    return 0;
}
