#include <stdio.h>

int main(){
    float n1,n2,m;
    scanf("%f %f", &n1,&n2);
    m = (n1+n2)/2;
    if (m >= 7.0) {
        printf("Aluno aprovado\n");
        printf("Media final: %f\n", m);
    }
    else{
        printf("Aluno reprovado\n");
        printf("Media final: %f", m);
    }
    return 0;
}