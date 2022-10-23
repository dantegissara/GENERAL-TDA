#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elemento.h"
#include "grupo.h"

int main()
{
    Grupo grupo = crearGrupoPorTeclado();

    inicializarElementosEnGrupo(grupo);

    agregarElementos(grupo,2);

    mostrarGrupo(grupo);

    ordenarElementosPorID(grupo);

    mostrarGrupo(grupo);

    guardarGrupo(grupo);

    modificarElemento(grupo,2);

    mostrarGrupo(grupo);

    return 0;
}
