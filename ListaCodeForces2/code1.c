#include <stdio.h>

int main(){
    int quant, i, maior = 0, menor = 0;
    double soma=0;
    double media = 0;
    scanf("%d", &quant);
    int nums[quant];
    for(i = 0; i<quant; i++){
        scanf("%d", &nums[i]);
        soma+= nums[i];
    }

    media = soma/quant;

    for(i = 0; i<quant; i++){
        if(nums[i]<media){
            menor++;
        }
        else{
            maior++;
        }
    }
    printf("%.1f\n", media);
    printf("%d\n", menor);
    printf("%d\n", maior);
}