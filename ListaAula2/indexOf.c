#include <stdio.h>
    void read_vector(int a[], int n){
        for (int i=0 ; i<n ; ++i)
        scanf("%d",&a[i]);
    }

    int index_of(int a[], int n, int x){
        int i;
        for (i = 0; i < n; i++) {
            if (a[i] == x) {
                return i;
            }
        }
        return -1;
}

    int main(){
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        read_vector(a,n);
        int index = index_of(a,n,x);
        printf("index of %d is %d.\n",x,index);
        return 0;
}