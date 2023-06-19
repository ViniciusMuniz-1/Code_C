#include <iostream>
#include <vector>

using namespace std;

typedef vector<double> vi;

int main(){
    int qtdp = 0, nota = 0, aux = 0;

    cin >> qtdp >> nota;

    vi notas(qtdp), medias(qtdp*(nota+1));

    for(int i = 0; i < qtdp; ++i){
        cin >> notas[i];
    }
    
    for(int i = 0; i < qtdp; i++){
        for(int j = i+1; j < qtdp; j++){
            for(int k = j+1; k < qtdp; k++){
                medias[aux] = (notas[i] + notas[j] + notas[k])/3;
                cout << (notas[i] + notas[j] + notas[k])/3 << " ";
                aux++;
            }
        }
    }
    cout << medias[nota];
}