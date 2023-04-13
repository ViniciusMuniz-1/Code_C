#include <stdio.h>

int main(){
    int x, r;

    scanf("%d", &x);

    if(x%2==0){
        r = x+2;
    }
    else{
        r = x+1;
    }

    printf("%d", r);
}