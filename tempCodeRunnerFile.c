#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int c = 5;
    int d = 8;
    int e = 10;
    int w = a+c*b&e-a|d/2;
    printf(w);
    return 0;
}