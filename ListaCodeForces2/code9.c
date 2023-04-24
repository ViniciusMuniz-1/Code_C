#include <stdio.h>

void solve(int quadrados, int fita[]){
    int i, j, distancia=0, d=0;

    for(i = 0; i<quadrados; i++){
        if(fita[i] == -1){
            distancia = quadrados;
            for(j = 0; j < quadrados; j++){
                if(fita[j] == 0){
                    d = 0;
                    if (i < j) {
                        d = j - i;
                    } else {
                        d = i - j;
                    }
                    if (d < distancia) {
                        distancia = d;
                    }
                }
            }
            if (distancia >= 9) {
                fita[i] = 9;
            } else {
                fita[i] = distancia;
            }
        }
    }

    for(i = 0; i<quadrados; i++){
        if(i+1==quadrados){
            printf("%d", fita[i]);
        }
        else{
            printf("%d ", fita[i]);
        }
    }
}

int main(){
    int quadrados = 0, i;
    scanf("%d", &quadrados);

    int fita[quadrados];
    for(i = 0; i<quadrados; i++){
        scanf("%d", &fita[i]);
    }

    solve(quadrados, fita);
}