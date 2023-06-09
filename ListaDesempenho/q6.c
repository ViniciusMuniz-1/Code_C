#include <stdio.h>
#include <time.h>

unsigned int retornar_menor(int array[]){
    int menor = 0;
    for(int i = 1; i < sizeof(array)+1; i++){
        if(array[menor] > array[i]){
            menor = i;
        }
    }
    return array[menor];
}

int main(){
    clock_t inicio,fim;
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    inicio = clock();
    int menor = retornar_menor(array);
    fim = clock();
    fprintf(stderr,"[%lld] Tempo: %lld milisegundos.\n",n,(long long)((fim-inicio)*1000)/CLOCKS_PER_SEC);
    printf("%d", menor);
}