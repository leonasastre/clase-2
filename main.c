#include <stdio.h>
#include <stdlib.h>
//realizar programa que imprima promedio,maximo,minimo//

int main()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliarInt;
    int i;
    //solicito el primer numero el cual por ser el primero
    //sera tanto el minimo como el maximo y el primer numero
    //ser acumulado
    printf("por favor ingrese un numero:");
    scanf("%d",&auxiliarInt);
    minimo=auxiliarInt;
    maximo=auxiliarInt;
    acumulador=auxiliarInt;

    for(i=0;i<4;i++)
    {
        printf("ingrese un numero:");
        scanf("%d",&auxiliarInt);
        acumulador=acumulador+auxiliarInt;

        if(auxiliarInt>maximo)
        {
            maximo=auxiliarInt;
        }

        if(auxiliarInt<minimo)
        {
         minimo=auxiliarInt;
        }
    }

    printf("el maximo es: %i\n",maximo);
    printf("el minimo es: %i\n",minimo);
    printf("el acumulador es: %i\n",acumulador /5);


    return 0;
}
