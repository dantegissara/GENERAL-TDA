#ifndef GRUPO_H_INCLUDED
#define GRUPO_H_INCLUDED
#include "elemento.h"

struct GrupoG;

typedef struct GrupoG * Grupo;

/*-----------
|CONSTRUCTOR
------------*/
///pre:nada
///post:devuelve un struct GrupoG con los atributos pasados por parametro
Grupo crearGrupo(char nombre[20], int ID);

///pre:se carga por teclado cada atributo
///post:devuelve un struct GrupoG personalizado
Grupo crearGrupoPorTeclado();

/*-----------
|DESTRUCTOR
------------*/
///pre:Grupo grupo debe existir
///post:libera el espacio de memoria reservado por Grupo grupo
void destruirGrupo(Grupo grupo);

/*--------------------
|FUNCIONES DE ELEMENTOS
----------------------*/
///pre:Grupo grupo debe existir
///post:setea como filtrables los indices del arreglo Elemento elementos[CANTIDAD_ELEMENTOS]
void inicializarElementosEnGrupo(Grupo grupo);

///pre:Grupo grupo debe existir, se debe cumplir que { -1 < cantidadElementos < CANTIDAD_ELEMENTOS } y debe haber indice libre en el arreglo
///post:  Inserta una cantidad 'cantidadElementos' de struct Elementoe en posiciones libres del arreglo Elemento elementos[]
void agregarElementos(Grupo grupo, int cantidadElementos);

///pre: Grupo grupo debe existir, el elemento a buscar tambien
///post:Modifica ID o cantidad del struct ElementoE en cuestion
void modificarElemento(Grupo grupo,int IDElemento);

///pre: Grupo grupo debe existir, y Elemento elementos[] debe contener struct _Elemento no-filtrables en sus indices
///post:
void ordenarElementosPorID(Grupo grupo);

///pre:Grupo grupo debe existir, el elemento a buscar tambien
///post:Setea como filtrable el struct _Elemento en cuestion
void eliminarElemento(Grupo grupo, int IDElemento);

/*--------------------
|FUNCIONES DE GRUPO
----------------------*/

///pre:Debe existir Grupo grupo, ademas debe ser no-filtrable
///post:Muestra todos los atributos (incluso los struct Elementoe) del struct GrupoG
void mostrarGrupo(Grupo grupo);

///pre:Grupo grupo debe existir y al menos tener una posicion libre
///post:Retorna -1 si no hay mas lugar; n > -1 si hay lugar
int buscarPosicionLibre(Grupo grupo);

/*--------------------
|PROCEDIMIENTOS DE ARCHIVO
----------------------*/

///pre:Grupo grupo debe existir, tambien Elemento elementos[] debe contener indices no-filtrables (Grupo grupo tambien)
///post:  Crea un archivo o sobreescribe un archivo 'grupo.txt' con todos los atributos del mismo, ademas tambien guarda
///        en 'elemento.txt' cada struct ElementoE que posea el struct GrupoG y que no sean filtrables
void guardarGrupoYElementos(Grupo grupo);






#endif // GRUPO_H_INCLUDED
