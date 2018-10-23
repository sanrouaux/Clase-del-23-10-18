#ifndef DATO_H_INCLUDED
#define DATO_H_INCLUDED

typedef struct
{
    int id;
    char nombre[80];
    int edad;

} ePersona;


ePersona* constructorPorDefecto();
ePersona* constructorConParametros(int, char*, int);
void mostrar(ePersona*);


//SETTERS Y GETTERS
int ePersona_setId(ePersona* pPersona, int id)
{
    int estado = 0;
    if(pPersona != NULL)
    {
        pPersona->id = id;
        estado = 1;
    }
    return estado;

}

int ePersona_getId(ePersona* pPersona)
{
    int id = -1;
    if(pPersona != NULL)
    {
        id = pPersona->id;
    }
    return id;
}


int ePersona_setNombre(ePersona* pPersona, char* nombre)
{
    int estado = 0;
    if(pPersona != NULL)
    {
        strcpy(pPersona->nombre, nombre);
        estado = 1;
    }
    return estado;
}

int ePersona_getNombre(ePersona* pPersona)
{

}


int ePersona_setEdad(ePersona* pPersona, int edad)
{

}

int ePersona_getEdad(ePersona* pPersona)
{

}


#endif // DATO_H_INCLUDED
