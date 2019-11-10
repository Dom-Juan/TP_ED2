//
// Created by ratob on 09/11/2019.
//

#ifndef NOVO_TPED2_ESTRUTURAS_H
#define NOVO_TPED2_ESTRUTURAS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct info__matriz{
    int grafo_saida;
    int grafo_chegada;
    int peso;
    int tipo;
}tm;

typedef struct matriz {
    int m[30][30];
    int peso[30][30];
    int tamanho;
    int visitado[30];
    int contem_peso;
    int origem;

}ma;

typedef struct auxiliar_matriz {
    int m[30][30];
    int peso[30][30];
    int tamanho;
    int visitado[30];
    int contem_peso;
    int origem;

}aux_ma;

typedef struct DFS_data{
    int origem;
    int tamanho;
    int tempo;
    int indice[30];
    char indice_cor[30];
    int descoberta[30];
    int finalizacao[30];
}dfs_struct;

typedef struct BFS_data{
    int origem;
    int tamanho;
    int indice[30];
    char indice_cor[30];
    int distancia[30];
    int pai[30];
}bfs_struct;

#endif //NOVO_TPED2_ESTRUTURAS_H
