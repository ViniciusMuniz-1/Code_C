#include <iostream>
#include <algorithm>
 
using namespace std;
 
int sublist(int lista[], int tam, int soma){
    if(soma==0){
        return 0;
    }
    else if(tam == 0 || soma < 0){
        return 10000000;
    }
    int resp1 = 1+sublist(lista, tam-1, soma-lista[tam-1]);
    int resp2 = sublist(lista, tam-1, soma);

    return min(resp1,resp2);
}
 
int main(){
    int tam, soma;
 
    cin >> tam >> soma;
 
    int lista[tam];
 
    for(int i = 0; i < tam; i++){
        cin >> lista[i];
    }
 
    int saida = sublist(lista, tam, soma);
    if(saida == 10000000){
        cout << 0;
    }
    else{
        cout << saida;
    }
}
