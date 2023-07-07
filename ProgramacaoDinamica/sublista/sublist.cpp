#include <iostream>

using namespace std;

int sublist(int a[], int tam, int soma){
    int r;
    if (soma==0) return 1;
    else if (soma<0 || tam==0){
        return 0;
    } 
    r=sublist(a,tam-1,soma-a[tam-1]);
    r=r||sublist(a,tam-1,soma);

    return r;
}

int main(){
    int tam, soma;

    cin >> tam >> soma;

    int a[soma];

    for(int i = 0; i < tam; i++){
        cin >> a[i];
    }

    int saida = sublist(a, tam, soma);

    cout << saida;

}