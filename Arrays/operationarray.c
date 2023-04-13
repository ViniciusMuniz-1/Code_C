#include <stdio.h>

int find_int(int a[], int tamanho, int x){
    int i,index = -1;
    for (i = 0; i<tamanho; ++i){
        if(a[i]==x){
            index = i;
            break;
        }
    }
    return index;
}

int remove_last(int a[], int tamanho){
    if(tamanho>0){
        tamanho--;
    }  
    return tamanho;
}

int append_int(int a[], int tamanho, int capacidade, int x){
    if (tamanho==capacidade){
        return tamanho;
    }
    a[tamanho] = x;
    return tamanho+1;
}

int insert_int(int a[], int tamanho, int capacidade, int x, int index){
    if (tamanho==capacidade){
        return tamanho;
    }
    int i;
    tamanho++;
    for (i=tamanho ; i>index; --i){
        a[i] = a[i-1];
    }
    a[index] = x;
    return tamanho;
}

void print_array(int a[], int tamanho){
    printf("{ ");
    int i;
    for (i=0; i<tamanho; ++i){
        printf("%d ", a[i]);
    }
    printf(" }\n");
}

int main(){
    int i, capacidade = 100, tamanho = 0;
    int a[capacidade];
    
    for(i=0; i<5; ++i){
        tamanho = append_int(a,tamanho,capacidade,i*3);
    }
    print_array(a,tamanho);
    tamanho = insert_int(a,tamanho,capacidade, 5, 2);
    print_array(a,tamanho);
    tamanho = remove_last(a,tamanho);
    print_array(a,tamanho);
    return 0;
}