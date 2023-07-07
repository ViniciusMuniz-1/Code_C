#include <iostream>
#include <algorithm>
 
using namespace std;
 
int sublist(int lista[], int tam, int soma){
    int resp = 10000000;

    if(soma==0){
        return 1;
    }
    else if(tam == 0 || soma < 0){
        return 10000000;
    }
    resp = min(resp, 1+sublist(lista, tam-1, soma-lista[tam-1]));
    cout << resp << " ";
    resp = min(resp, sublist(lista, tam-1, soma));

    return resp;
}
 
int main(){
    int tam, soma;
 
    cin >> tam >> soma;
 
    int lista[soma];
 
    for(int i = 0; i < tam; i++){
        cin >> lista[i];
    }
 
    int saida = sublist(lista, tam, soma);
 
    cout << saida;
 
}
