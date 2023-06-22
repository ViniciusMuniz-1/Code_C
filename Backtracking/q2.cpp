#include <iostream>
#include <algorithm>

using namespace std;

int caminho(int matriz[12][12], int linha, int coluna, int x, int y){
    if (x==-1 || y==-1 || x==coluna || y==linha || matriz[y][x]!=0){
        return 0;
    }
    if (x==coluna-1 && y==linha-1){
        return 1;
    }

    matriz[y][x] = 1;

    int ans = 0 ;

    ans = caminho(matriz, linha, coluna, x, y+1);
    int ans2 = caminho(matriz, linha, coluna, x+1, y);
    int ans3 = caminho(matriz, linha, coluna, x-1, y);
    int ans4 =caminho(matriz, linha, coluna, x, y-1);

    matriz[y][x] = 0;

    return 1+min(min(ans, ans2), min(ans3,ans4));
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
    cout << saida;

    return 0;
}