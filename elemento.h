#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED

struct _Elemento;

typedef struct _Elemento * Elemento;



Elemento crearElemento(char nombre[20], int ID, int cantidad);
Elemento crearElementoPorTeclado();
Elemento inicializarElemento();



void setNombreElemento(Elemento elemento, char nuevoNombre[20]);
void setIDElemento(Elemento Elemento, int nuevoID);
void setCantidadElemento(Elemento elemento, int nuevaCantidad);

void destruirElemento(Elemento elemento);



char * getNombreElemento(Elemento elemento);
int getIDElemento(Elemento Elemento);
int getCantidadElemento(Elemento elemento);

void mostrarElemento(Elemento elemento);



void guardarElementos(Elemento elementos[]);

#endif // ELEMENTO_H_INCLUDED
