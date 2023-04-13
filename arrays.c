#include <stdio.h>

int main(){
    int i, a[10];
    for (i=0; i<10; ++i){
        scanf("%d", &a[i]);
    }
    int qtdzeros = 0;
    for (i=0; i<10; ++i){
        if(a[i]==0){
            qtdzeros++;
        }
    }
   printf("%d", qtdzeros);
}