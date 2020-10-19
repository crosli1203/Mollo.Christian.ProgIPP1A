#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ejercicioTres.h"


void ordenarPorMarca(Notebook* notebooks,int tam)
{

    Notebook auxNote;

    for(int i = 0; i< tam-1; i++)
    {
        for(int j = i+1; j<tam;j++){

            if(strcmp(notebooks[i].marca,notebooks[j].marca)>0){

                auxNote = notebooks[i];
                notebooks[i] = notebooks[j];
                notebooks[j] = auxNote;

            }
            else if(strcmp(notebooks[i].marca,notebooks[j].marca)==0 && notebooks[i].precio < notebooks[j].precio)
            {
                auxNote = notebooks[i];
                notebooks[i] = notebooks[j];
                notebooks[j] = auxNote;
            }


        }


    }


}
