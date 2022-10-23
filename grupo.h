#ifndef GRUPO_H_INCLUDED
#define GRUPO_H_INCLUDED
#include "elemento.h"

struct GrupoG;

typedef struct GrupoG * Grupo;

Grupo crearGrupo(char nombre[20], int ID);

Grupo crearGrupoPorTeclado();

Elemento getElementos(Grupo grupo);

void inicializarElementosEnGrupo(Grupo grupo);

void agregarElementos(Grupo grupo, int cantidadElementos);

void modificarElemento(Grupo grupo,int IDElemento);

void destruirGrupo(Grupo grupo);

void ordenarElementosPorID(Grupo grupo);

void eliminarElemento(Grupo grupo, int IDElemento);

void mostrarGrupo(Grupo grupo);

void guardarGrupoYElementos(Grupo grupo);

int buscarPosicionLibre(Grupo grupo);

#endif // GRUPO_H_INCLUDED
