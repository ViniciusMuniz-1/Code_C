#include <stdio.h>
 
int main(){
    long long a11, a21;
    scanf("%lld %lld", &a11, &a21);
    long long a12, a22;
    scanf("%lld %lld", &a12, &a22);
    long long p1, p2;
    scanf("%lld %lld", &p1, &p2);
 
    long long m1 = ((a11*p1)+(a21*p2))/(p1+p2);
    long long m2 = ((a12*p1)+(a22*p2))/(p1+p2);
 
    if(m1>m2 || m1==m2){
        printf("1");
    }
    else{
        printf("2");
    }
}