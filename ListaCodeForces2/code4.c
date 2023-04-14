#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, r, i, id, cont=0;
    scanf("%d %d", &n, &r);
    int *retorno = (int *) calloc(n+1, sizeof(int));
    if (retorno == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    
    
    for (i = 0; i < r; i++) {
        scanf("%d", &id);
        retorno[id] = 1;
    }

    for (i = 1; i <= n; i++){
        if(retorno[i]==0){
            printf("%d ", i);
            cont++;
        }
    }

    if(cont==0){
        printf("*");
    }
    printf("\n");

    free(retorno);
    return 0;
}