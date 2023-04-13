#include <stdio.h>

int main(){
    int n1, n2, r;

    scanf("%d %d", &n1, &n2);

    while(n2!=0){
        r = n1%n2;
        n1 = n2;
        n2 = r;
    }

    printf("%d\n", n1);
    
    return 0;
}