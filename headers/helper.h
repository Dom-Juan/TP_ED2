//
// Created by ratob on 09/11/2019.
//

#ifndef NOVO_TPED2_HELPER_H
#define NOVO_TPED2_HELPER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Macros definidos pela propria linguagem C para pausar o CMD na execucao
void pause(){
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("read -p 'Press Enter to continue...' var");
#endif

#if defined(_WIN32) || defined(_WIN64)
    system("pause");
#endif


}
// Limpa a tela da aplicacao, mas nao respeitava o system pause, descontinuado.
/*void clrscr() {
    system("@cls||clear");
    fflush(stdin);
}*/
// Limpando a tela conforme o sistema operacional do usuario, tambem definido por macros
void clrscr(){
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("clear");
#endif

#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#endif
}

#endif //NOVO_TPED2_HELPER_H
