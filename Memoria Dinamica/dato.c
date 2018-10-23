#include <stdio.h>
#include <stdlib.h>
#include "dato.h"

/** \brief Constructor por defecto
 *
 * \param a int
 * \param b char
 * \return eDato*
 *
 */
ePersona* constructorPorDefecto()
{
    ePersona* pPersona;
    pPersona = (ePersona*)malloc(sizeof(ePersona));

    if(pPersona != NULL)
    {
        pPersona->id = 0;
        strcpy(pPersona->nombre, " ");
        pPersona->edad = 0;
    }

    return pPersona;
}

/** \brief
 *
 * \param a int
 * \param b char
 * \return eDato*
 *
 */
ePersona* constructorConParametros(int id, char* nombre, int edad)
{
    ePersona* pPersona;
    pPersona = constructorPorDefecto();

    if(pPersona != NULL)
    {
        pPersona->id = id;
        strcpy(pPersona->nombre, nombre);
        pPersona->edad = edad;
    }

    return pPersona;
}


/** \brief
 *
 * \param punteroDato eDato*
 * \return void
 *
 */
void mostrar(ePersona* punteroPersona)
{
    printf("%d - %s - %d \n", punteroPersona->id, punteroPersona->nombre, punteroPersona->edad);
}
