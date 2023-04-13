#include <stdio.h>
void Ordenadas(int k[], int tam){
    int chave;
    int l=0;
   for(int c=1;c<tam;c++){
       chave=k[c];
       int i=c-1;
       while (i>0 && k[i]>chave){
           k[i+1]=k[i];
           i--;
       }
       k[i+1]=chave;
   }
   while(k[l]>k[l+1]){
       int x=k[l+1];
       k[l+1]=k[l];
       k[l]=x;
       l++;
   }
}
int main()
{
    int j[]={6,8,4,2,0,101,10,45,-4};
    int n = sizeof(j)/sizeof(j[0]);
    Ordenadas(j,n);
    for(int i=0;i<n;i++){
        printf("%d ",j[i]);
    }
    return 0;
}