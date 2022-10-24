#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED

struct ElementoE;

typedef struct ElementoE * Elemento;


/*-----------
|CONSTRUCTOR
------------*/

///pre: Nada
///post: Devuelve un struct ElementoE con los atributos que se pasen por parametro
Elemento crearElemento(char nombre[20], int ID, int cantidad);

///pre: se ingresa cada atributo por teclado
///post: devuelve un struct ElementoE personalizado
Elemento crearElementoPorTeclado();

///pre: null
///post: devuelve un struct ElementoE filtrable
Elemento inicializarElemento();

/*-----------
|DESTRUCTOR
------------*/
///pre: debe existir Elemento elemento
///post: libera el espacio de memoria reservado por Elemento elemento
void destruirElemento(Elemento elemento);


/*-----------
|SETTERS
------------*/
///pre: Elemento elemento debe existir
///post: cambia el atributo nombre del struct ElementoE
void setNombreElemento(Elemento elemento, char nuevoNombre[20]);

///pre: Elemento elemento debe existir
///post: cambia el atributo ID del struct ElementoE
void setIDElemento(Elemento Elemento, int nuevoID);

///pre: Elemento elemento debe existir
///post: cambia el atributo cantidad del struct ElementoE
void setCantidadElemento(Elemento elemento, int nuevaCantidad);

/*-----------
|GETTERS
------------*/

///pre:Elemento elemento debe existir
///post:devuelve el atributo nombre del struct ElementoE
char * getNombreElemento(Elemento elemento);

///pre:Elemento elemento debe existir
///post:devuelve el atributo ID del struct ElementoE
int getIDElemento(Elemento Elemento);

///pre:Elemento elemento debe existir
///post:devuelve el atributo cantidad del struct ElementoE
int getCantidadElemento(Elemento elemento);

/*---------------------
|FUNCIONES DE ELEMENTO
-----------------------*/

void mostrarElemento(Elemento elemento);

/*-------------------------
|PROCEDIMIENTOS DE ARCHIVO
--------------------------*/

void guardarElementos(Elemento elementos[]);

#endif // ELEMENTO_H_INCLUDED
