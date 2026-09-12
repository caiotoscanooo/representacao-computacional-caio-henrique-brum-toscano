#include "grafo.h"
#include <stdlib.h>

Grafo *criarGrafo() {
    Grafo *g = (Grafo *)malloc(sizeof(Grafo));

    if (g == NULL) {
        return NULL;
    }

    inicializarListaAdj(g->listaAdj);
    inicializarMatrizAdj(g->matrizAdj);

    return g;
}

bool inserirAresta(Grafo *g, int origem, int destino) {
    if (g == NULL ||
        origem < 0 || origem >= MAX_VERTICES ||
        destino < 0 || destino >= MAX_VERTICES) {
        return false;
    }

    No *novoNo = criarNo(destino);

    if (novoNo == NULL) {
        return false;
    }

    novoNo->proximo = g->listaAdj[origem];
    g->listaAdj[origem] = novoNo;

    return inserirArestaMatriz(g->matrizAdj, origem, destino);
}

bool existeAresta(Grafo *g, int origem, int destino) {
    if (g == NULL) {
        return false;
    }

    return existeArestaMatriz(g->matrizAdj, origem, destino);
}

void destruirGrafo(Grafo *g) {
    if (g == NULL) {
        return;
    }

    for (int i = 0; i < MAX_VERTICES; i++) {
        destruirListaAdj(&g->listaAdj[i]);
    }

    free(g);
}