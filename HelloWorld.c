#include <stdio.h>

int soma(int a, int b){
    int s;
    s = a+b;
    return s;
}

int main(){
    int a,b,r;
    scanf("%d", &a);
    scanf("%d", &b);
    r = soma(a, b);
    printf("%d + %d = %d\n",a,b,r);
    return 0;
}
