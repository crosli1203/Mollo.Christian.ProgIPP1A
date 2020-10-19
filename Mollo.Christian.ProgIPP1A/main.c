#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ejercicioUno.h"
#include "ejercicioDos.h"
#include "ejercicioTres.h"

#define TAM 5





int main()
{
    //Ejercicio 1
    float numero = 100;
    float descuento;

    descuento = aplicarDescuento(numero);
    printf("Ejercicio 1: %.2f\n\n",descuento);


    //Ejercicio 2
    char cadenaDeCaracteres[] = {"abcdefghaaabcijklmnopqrstuvwxy"};
    char caracter = 'z';
    int cantidad;


    cantidad = contarCaracteres(cadenaDeCaracteres,caracter);

    printf("Ejercicio 2: %d\n\n",cantidad);



    //Ejercicio 3
    Notebook notebooks[] = {{0,"Intel","Asus",20000.00},{1,"AMD","Lg",25000.00},{2,"Intel","MSI",23000.00},{3,"AMD","Asus",24000.00},{4,"Intel","MSI",22000.00}};



    ordenarPorMarca(notebooks,TAM);
    printf("\n\n Ejercicio 3: \n\n");

    for(int i = 0; i< TAM; i++)
    {
    printf("%d, %s, %.2f, %s  \n\n",notebooks[i].id,notebooks[i].marca,notebooks[i].precio,notebooks[i].procesador);

    }



    return 0;
}
