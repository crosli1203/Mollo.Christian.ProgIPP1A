#include <stdio.h>
#include <stdlib.h>
#include "ejercicioDos.h"


int contarCaracteres(char* cadena, char caracter)
{
    int retorno = -1;
    int cantidad = 0;
    int i = 0;

    while(cadena[i]!= '\0' && cadena[i]!= '\n')
    {


        if(cadena[i] == caracter)
        {
            cantidad++;
            retorno = cantidad;
        }

        i++;

    }

    return retorno;
}
