#include <stdio.h>

int contar_carneirinhos_distintos(int quantc, int carneirinhos[]) {
    int carneirinhos_distintos = 0;
    int i, j, repetido;

    for (i = 0; i < quantc; i++) {
        repetido = 0;

        for (j = 0; j < i; j++) {
            if (carneirinhos[i] == carneirinhos[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            carneirinhos_distintos++;
        }
    }

    return carneirinhos_distintos;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int quantc;
        scanf("%d", &quantc);

        int carneirinhos[quantc];
        for (int j = 0; j < quantc; j++) {
            scanf("%d", &carneirinhos[j]);
        }

        int resultado = contar_carneirinhos_distintos(quantc, carneirinhos);

        printf("%d\n", resultado);
    }

    return 0;
}