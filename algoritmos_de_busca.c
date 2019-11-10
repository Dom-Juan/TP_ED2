//
// Created by ratob on 09/11/2019.
//

#include "headers/estruturas.h"
#include "headers/algoritmos_de_busca.h"

void visit_dfs(struct auxiliar_matriz *aux2_matriz, int origem, dfs_struct *dfs_tabela, bool debug){
    dfs_tabela->indice_cor[origem] = 'c';
    dfs_tabela->tempo = dfs_tabela->tempo + 1;
    dfs_tabela->descoberta[origem] = dfs_tabela->tempo;

    if(debug == true){
        printf("\nAntes da Recursao.\n");
        printf("Origem:%d\n", origem);
        printf("Tempo; %d\n",dfs_tabela->tempo);
        printf("Ini; %d\n",dfs_tabela->descoberta[origem]);
        printf("Cor; %c\n",dfs_tabela->indice_cor[origem]);
    }

    int v = 0;
    for(v = 0; v < aux2_matriz->tamanho; v++){
        if(aux2_matriz->m[origem][v] == 1 && dfs_tabela->indice_cor[v] == 'b'){

            if(debug == true)
                printf("-> origem:%d v:%d cor:%c\n",origem,v,dfs_tabela->indice_cor[v]);

            visit_dfs(aux2_matriz, v, dfs_tabela, debug);
        }
    }

    dfs_tabela->indice_cor[origem] = 'p';
    dfs_tabela->tempo = dfs_tabela->tempo + 1;
    dfs_tabela->finalizacao[origem] = dfs_tabela->tempo;

    if(debug == true){
        printf("\nDepois da Recursao.");
        printf("Origem:%d\n", origem);
        printf("Tempo; %d\n",dfs_tabela->tempo);
        printf("Fim; %d\n",dfs_tabela->finalizacao[origem]);
        printf("Cor; %c\n",dfs_tabela->indice_cor[origem]);
    }
}

void dfs(struct auxiliar_matriz *aux2_matriz,int origem, dfs_struct *dfs_tabela, bool debug){
    int i = 0;
    int j = 0;

    dfs_tabela->tempo = 0;
    printf("Function atual: dfs(ma *aux_matriz);\n");

    for(i = 0; i < dfs_tabela->tamanho; i++) {
        dfs_tabela->indice_cor[i] = 'b';
    }

    for( j = 0; j < dfs_tabela->tamanho; j++){
        if(dfs_tabela->indice_cor[j] == 'b'){
            visit_dfs(aux2_matriz, origem, dfs_tabela, debug);
        }
    }
}

