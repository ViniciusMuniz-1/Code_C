#include <stdio.h>
#include <stdlib.h>

void solve(int pessoasfila, int fila[], int sairam, int deixaramafila[]){
    int i, j, k;
    int *novafila = (int *) calloc((pessoasfila-sairam), sizeof(int));
    if (novafila == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    j = 0;
    for (i = 0; i < pessoasfila; i++) {
        for (k = 0; k < sairam; k++) {
            if (fila[i] == deixaramafila[k]) {
                break;
            }
        }
        if (k == sairam) {
            novafila[j++] = fila[i];
        }
    }

    for (i = 0; i < j; i++) {
        if(i+1==j){
            printf("%d", novafila[i]);
        }
        else{
            printf("%d ", novafila[i]);
        }
    }
    printf("\n");

}

int main(){
    int pessoasfila = 0, sairam=0,  i;
    scanf("%d", &pessoasfila);

    int fila[pessoasfila];
    for(i = 0; i<pessoasfila; i++){
        scanf("%d", &fila[i]);
    }

    scanf("%d", &sairam);

    int deixaramafila[sairam];
    for(i = 0; i<sairam; i++){
        scanf("%d", &deixaramafila[i]);
    }

    solve(pessoasfila, fila, sairam, deixaramafila);
}