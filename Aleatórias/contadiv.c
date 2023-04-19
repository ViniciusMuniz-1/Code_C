#include <stdio.h>

int conta_divisores(int n){
    int d = 1, qtd = 1;
    while(d!=n){
        if((n%d)==0){
            qtd++;
        }
        d++;
    }
    printf("%d", qtd);
    return qtd;
}

int main(){
    int d;
    scanf("%d", &d);
    int a = conta_divisores(d);
}
