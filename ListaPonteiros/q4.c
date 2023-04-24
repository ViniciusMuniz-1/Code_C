#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int *ptr = &x;
    scanf("%d", ptr);
    printf("%d", x);
    return 0;
}