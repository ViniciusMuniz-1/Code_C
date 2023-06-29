#include <iostream>
#include <algorithm>

using namespace std;

int esforco(int matriz[8][8], int linhas, int colunas, int lInicio, int cInicio, int lFinal, int cFinal, int contrLinha, int contrColuna){
    if(contrLinha<0 || contrColuna < 0 || contrLinha == linhas || contrColuna == colunas || matriz[contrLinha][contrColuna] == -1){
        return 10000000;
    }
    if(contrLinha == lFinal && contrColuna == cFinal){
        return matriz[contrLinha][contrColuna];
    }

    int oldValue = matriz[contrLinha][contrColuna];

    matriz[contrLinha][contrColuna] == -1;

    int ans = 10000000;

    ans = min(ans, oldValue+esforco(matriz, linhas, colunas, lInicio, cInicio, lFinal, cFinal, contrLinha, contrColuna+1));                      //baixo
    ans = min(ans, oldValue+esforco(matriz, linhas, colunas, lInicio, cInicio, lFinal, cFinal, contrLinha+1, contrColuna));                             //direita
    ans = min(ans, oldValue+esforco(matriz, linhas, colunas, lInicio, cInicio, lFinal, cFinal, contrLinha-1, contrColuna));                             //esquerda
    ans = min(ans, oldValue+esforco(matriz, linhas, colunas, lInicio, cInicio, lFinal, cFinal, contrLinha, contrColuna-1));                              //cima

    matriz[contrColuna][contrLinha] = oldValue;

    return ans;
}

int main(){
    int linhas, colunas;
    cin >> linhas >> colunas;
    int lInicio, cInicio;
    cin >> lInicio >> cInicio;
    int lFinal, cFinal;
    cin >> lFinal >> cFinal;

    int matriz[8][8];

    for(int i = 0; i < linhas; ++i){
        for(int j = 0; j < colunas; ++j){
            cin >> matriz[i][j];
        }
    }

    int contrLinha = lInicio;
    int contrColuna = cInicio;
    int saida = esforco(matriz, linhas, colunas, lInicio, cInicio, lFinal, cFinal, contrLinha, contrColuna);
    cout << saida;

    return 0;
}