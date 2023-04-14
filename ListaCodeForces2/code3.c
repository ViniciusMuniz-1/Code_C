#include <stdio.h>
#include <stdbool.h>

#define MAX_N 10000
#define MAX_NUM 1000000000

int main() {
    int t, n, i, j, num, count;
    bool seen[MAX_NUM+1];

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        // Inicializa o vetor seen
        for (i = 0; i <= MAX_NUM; i++) {
            seen[i] = false;
        }

        count = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &num);

            // Verifica se o número já foi visto antes
            if (!seen[num]) {
                seen[num] = true;
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}