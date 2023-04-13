#include <stdio.h>

int main() {
    int a, b, duracao;

    scanf("%d", &a);

    scanf("%d", &b);

    duracao = b - a;

    int h = duracao / 60;
    int m = duracao % 60;

    printf("%02d:%02d\n", h, m);

    return 0;
}