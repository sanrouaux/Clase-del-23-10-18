#include <stdio.h>
#include <stdlib.h>
#include "dato.h"

int main()
{
    ePersona* punteroPersona;
    punteroPersona = constructorConParametros(1234, "Juan", 25);

    mostrar(punteroPersona);

    return 0;
}
