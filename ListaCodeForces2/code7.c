#include <stdio.h>
#include <stdlib.h>

int main(){
    int j, r, i, k, l, m;
    scanf("%d %d", &j, &r);
    int *pontos = (int *) malloc((j*r) * sizeof(int));
    if (pontos == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    int *pontostotais = (int *) calloc(r, sizeof(int));
    if (pontostotais == NULL){
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    for(i = 0; i<(j*r); i++){
        scanf("%d", &pontos[i]);
    }

    for(k = 0; k<r; k++){
        for(l = 0; l<r; l++){
            for(m = 0; m<(j*r); j++){
                pontostotais[k] = pontostotais[l] + pontos[m];
            }
        }
    }
    
    int vencedor = 0;
    for(i = 0; i<r; i++){
        printf("%d \n", pontostotais[i]);
        if(pontostotais[vencedor] <= pontostotais[i]){
            vencedor = i;
        }
    }
    
    printf("%d", vencedor);
}