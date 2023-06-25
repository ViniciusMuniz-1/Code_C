#include <iostream>
#include <algorithm>
#include <climits>  //para tentar usar o int max dps

using namespace std;

int caminho(int matriz[12][12], int linha, int coluna, int x, int y){
    if (x<0 || y<0 || x>=coluna || y>=linha || matriz[y][x]!=0){//condições alteradas para ver se isso funciona
        return 10000000; //retornando valor mais alto possível para pegar o menor caminha
    }
    if (x==coluna-1 && y==linha-1){
        return 1;
    }

    matriz[y][x] = 1;

    int ans = 10000000; //valor mais alto possível para pegar o menor caminha

    ans = min(ans, 1+caminho(matriz, linha, coluna, x, y + 1)); //baixo
    ans = min(ans, 1+caminho(matriz, linha, coluna, x + 1, y)); //direita
    ans = min(ans, 1+caminho(matriz, linha, coluna, x - 1, y)); //esquerda
    ans = min(ans, 1+caminho(matriz, linha, coluna, x, y - 1)); //cima

    matriz[y][x] = 0;

    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    int matriz[12][12];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> matriz[i][j];
        }
    }
    int saida = caminho(matriz, n, m, 0, 0);
    if (saida == 10000000) {
        cout << -1 << endl; // n tem caminho
    } else {
        cout << saida << endl;
    }

    return 0;
}