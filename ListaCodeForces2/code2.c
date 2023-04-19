#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int quant, i, maior = 0, menor = 0;
    double soma = 0;
    double media = 0;
    scanf("%d", &quant);
    int *nums = (int *) malloc(quant * sizeof(int));
    if (nums == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
 
    for (i = 0; i < quant; i++) {
        scanf("%d", &nums[i]);
        soma += nums[i];
    }
 
    media = soma / quant;   
    printf("%.1f\n", media);
 
    for(i = 0; i<quant; i++){
        if(nums[i]<media){
            menor++;
        }
        else{
            maior++;
        }
    }
 
    printf("%d", menor);
    for (i = 0; i < quant; i++) {
        if (nums[i] < media) {
                printf(" %d", nums[i]);
    }
    }
    printf("\n");
 
    printf("%d", maior);
    for (i = 0; i < quant; i++) {
        if (nums[i] >= media) {
                printf(" %d", nums[i]);
        }
    }
    printf("\n");
 
    free(nums);
 
    return 0;
}
