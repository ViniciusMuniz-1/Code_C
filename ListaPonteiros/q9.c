#include <stdio.h>
#include <stdlib.h>

    struct array_list{
        int *data;
        unsigned int size;
        unsigned int capacity;
    };

    void array_list_increase_capacity(struct array_list *list){
        int * new_data = (int*)malloc(sizeof(int)*(list->capacity+10));
        for(int i = 0; i < list->capacity ; ++i){
            new_data[i] = list->data[i];
        }
        free(list->data);
        list->data = new_data;
        list->capacity = list->capacity+10;
    }
    
    
    void array_list_pop(struct array_list *list){
        list->size--;
    }

    //Para o append, saber o tamanho vai ser a chave, visto que o último elemento deve ser adicionado no último index
    void array_list_append(struct array_list *list, int value){
        if(list->size == list->capacity){
            array_list_increase_capacity(list);
            list->data[list->size++] = value;
        }
        else{
            list->data[list->size++] = value;
        }
    }

    unsigned int array_list_insert(struct array_list *list, int value, int index){
        if(index<0 || index > list->size){
            return -1;
        }

        if(index == list->size) {
            array_list_append(list, value);
            return list->size++;
        }

        if()
        return true;
    }

    struct array_list * array_list_clone(struct array_list *list){
        struct array_list *list_clone;
        list_clone = (struct array_list*)malloc(sizeof(struct array_list));
        if (list_clone==0){ /* Error */
        fprintf(stderr,"Error on memory allocation.\n");
        exit(-1);
        }

        list_clone->capacity = list->capacity;
        list_clone->size = list->size;
        list_clone->data = (int*)malloc(sizeof(int)*list_clone->capacity);
        if (list_clone->data==0){ /* Error */
            fprintf(stderr,"Error on memory allocation.\n");
            exit(-1);
        }

        for(int i = 0; i < list_clone->capacity ; ++i){
            list_clone->data[i] = list->data[i];
        }
        return list_clone;
    }

    struct array_list * array_list_create(){
        struct array_list *new_list;
        new_list = (struct array_list*)malloc(sizeof(struct array_list));
        if (new_list==0){ /* Error */
        fprintf(stderr,"Error on memory allocation.\n");
        exit(-1);
        }
        new_list->capacity = 10;
        new_list->size = 0;
        new_list->data = (int*)malloc(sizeof(int)*new_list->capacity);
        if (new_list->data==0){ /* Error */
            fprintf(stderr,"Error on memory allocation.\n");
            exit(-1);
        }
        return new_list;
    }

    void array_list_read_until(struct array_list *list, int end_reading){
        int x;
        while (scanf("%d",&x),x!=end_reading){
            array_list_append(list , x);            // Chamando a função array_list_append passando a lista e o elemento a ser adicionado
        }
    }

    void array_list_print(struct array_list *list){
        printf("[");
        if (list->size>0){
        printf("%d",list->data[0]);
        for (int i=1 ; i<list->size ; ++i)
        printf(", %d",list->data[i]);
        }
        printf("]");
    }

    int main(){
        struct array_list *list01 = array_list_create(); // Criando o array
        array_list_read_until(list01,-1);
        array_list_print(list01);
        printf("\n");
        array_list_insert(list01, 4, 3);
        array_list_print(list01);
        free(list01->data);
        free(list01);
        return 0;
    }
