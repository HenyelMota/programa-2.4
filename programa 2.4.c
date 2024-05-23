#include <stdio.h>

int main()
{
    float PRE, NPR;                              /*definimos dos variables float, PRE para el precio del producto y NPR para el precio del producto mas el aumento del 11%*/
    printf ("ingrese el precio del producto: "); /*aparecera el texto pidiendo que ingrese el precio del producto*/
    scanf ("%f", &PRE);                          /*el dato colocado se agregar a la variable PRE*/

    if(PRE > 1500)                               /*se abre la condicion si el precio es mayor a 1500 seejecutara lo siguiente*/
    {
        NPR = PRE * 1.11;                        /*si la consicion secumple el nuevo precio sera igual al precio pro 1.11*/
        printf("\n nuevo precio: %7.2f",NPR);    /*se imprimira el nuevo precio*/
    }else                                        /*si no se cumple la condicion if se ejecutara el siguiente codigo*/
    {
        NPR = PRE * 1.08;                        /*si la consicion if no se cumple el nuevo precio sera igual al precio pro 1.08*/
        printf("\n Nuevo precio: %8.2f", NPR);
    }
    return 0;
}
