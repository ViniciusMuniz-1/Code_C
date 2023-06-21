#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

typedef vector<double> vi;

int main(){
    int qtdp = 0, nota = 0;

    while (cin >> qtdp >> nota){
        vi notas(qtdp), medias;

        for(int i = 0; i < qtdp; ++i){
            cin >> notas[i];
        }
        
        for(int i = 0; i < qtdp; i++){
            for(int j = i+1; j < qtdp; j++){
                for(int k = j+1; k < qtdp; k++){
                    double media = (notas[i]+notas[j]+notas[k])/3.0;
                    medias.push_back(media);
                }
            }
        }
        sort(medias.begin(), medias.end());
        cout << fixed << setprecision(1) << medias[medias.size()-nota] << endl;
    }

    return 0;
}