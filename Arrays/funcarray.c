#include <stdio.h>

int maiorelemento(int a[], int tamanho){
    int i,maior = a[0];
    for (i=0; i<tamanho; ++i){
        if(a[i]>maior){
            maior = a[i];
        }
    }
    return maior;
}

int indicemaiorelemento(int a[], int tamanho){
    int i,maior = 0;
    for (i=0; i<tamanho; ++i){
        if(a[i]>a[maior]){
            maior = i;
        }
    }
    return maior;
}

void trocaelemento(int a[], int i1, int i2){
    int aux = a[i1];
    a[i1] = a[i2];
    a[i2] = aux;
}

int main(){
    int i, tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];

    for (i=0; i<tamanho; ++i){
        scanf("%d", &a[i]);
    }

    for (i=0; i<tamanho; ++i){
        printf("%d ", a[i]);
    }

    printf("Maior elemento: %d\n", maiorelemento(a,tamanho));
    int indicerMaior = indicemaiorelemento(a,tamanho);
    printf("Indice do maior elemento: %d\n", indicerMaior);
    trocaelemento(a, 0, indicerMaior);
    for (i=0; i<tamanho; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}