#include <stdio.h>

int main() {
    int n, i, picos;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        int h[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &h[i]);
        }

        picos = 0;

        //um pico é determinado quando ele é maior que o valor da magnitude do sinal anterior e do seguinte. Também se for
        //que o sinal anterior e seguinte.
        for (i = 1; i < n - 1; i++) {
            if ((h[i] > h[i-1] && h[i] > h[i+1]) || (h[i] < h[i-1] && h[i] < h[i+1])) {
                picos++;
            }
        }
        
        //verificação do 1º pico
        if ((h[0] > h[1] && h[0] > h[n-1]) || (h[0] < h[1] && h[0] < h[n-1])) {
            picos++;
        }
        //verificação do 2º pico
        if ((h[n-1] > h[0] && h[n-1] > h[n-2]) || (h[n-1] < h[0] && h[n-1] < h[n-2])) {
            picos++;
        }

        printf("%d\n", picos);
    }

    return 0;
}