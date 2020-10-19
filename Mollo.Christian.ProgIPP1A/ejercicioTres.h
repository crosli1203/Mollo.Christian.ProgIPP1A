#ifndef EJERCICIOTRES_H_INCLUDED
#define EJERCICIOTRES_H_INCLUDED



#endif // EJERCICIOTRES_H_INCLUDED


typedef struct{

    int id;
    char procesador[20];
    char marca[30];
    float precio;



}Notebook;



/** \brief Ordena un array de datos por marca y por precio
 *
 * \param Notebook* notebooks. estructura de datos a ordenar
 * \param int tam: tamanio de la estructura
 *
 */

void ordenarPorMarca(Notebook* notebooks, int tam);
