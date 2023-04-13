#include <stdio.h>

int main(){
    int i,tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];
    for (i=0; i<tamanho; ++i){
        scanf("%d", &a[i]);
    }
    for (i=0; i<tamanho; ++i){
        printf("%d ", a[i]);
    }
    return 0;

}