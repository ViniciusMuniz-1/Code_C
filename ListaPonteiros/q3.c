#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int c = *a;
    a = b;
    b = &c;
    
    printf("%d\n", *a);
    printf("%d", *b);
}

int main(){
    int a = 30, b = 20;

    int *ponteiro1;
    ponteiro1 = &a;
    int *ponteiro2;
    ponteiro2 = &b;

    swap(ponteiro1, ponteiro2);
}