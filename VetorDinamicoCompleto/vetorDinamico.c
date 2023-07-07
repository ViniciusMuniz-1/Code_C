#include <stdio.h>
#include <stdlib.h>

    struct array_list{
        int *data;
        unsigned int size;
        unsigned int capacity;
    };

    //AUMENTA A CAPACIDADE DO VETOR EM 2 VEZES O TAMANHO ATUAL
    //COMPLEXIDADE: O(N), visto que percorre o array inteiro para alocar mais espaço de memória
    void array_list_increase_capacity(struct array_list *list){
        int * new_data = (int*)malloc(sizeof(int)*(list->capacity*2));
        for(int i = 0; i < list->capacity ; ++i){
            new_data[i] = list->data[i];
        }
        free(list->data);
        list->data = new_data;
        list->capacity = list->capacity*2;
    }

    //CLONA O VETOR
    //COMPLEXIDADE:
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

    //CRIA UM NOVO VETOR ALOCANDO ESPAÇO DE MEMÓRIA PARA ELE
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

    //LÊ UM VETOR
    void array_list_read_until(struct array_list *list, int end_reading){
        int x;
        while (scanf("%d",&x),x!=end_reading){
            array_list_append(list , x);            // Chamando a função array_list_append passando a lista e o elemento a ser adicionado
        }
    }

    //PRINTA UM VETOR
    void array_list_print(struct array_list *list){
        printf("[");
        if (list->size>0){
        printf("%d",list->data[0]);
        for (int i=1 ; i<list->size ; ++i)
        printf(", %d",list->data[i]);
        }
        printf("]");
    }

    
    //Remove um elemento do final do vetor, caso exista.
    //COMPLEXIDADE: O(1), visto que faz a mesma operação independente do tamanho do vetor
    void array_list_pop_back(struct array_list *list){
        list->size--;
    }

    //Retorna a quantiade de elementos existente na lista;
    //COMPLEXIDADE: O(1)
    unsigned int array_list_size(array_list_int * list){
        return size;
    }

    //Para o push_back, saber o tamanho vai ser a chave, visto que o último elemento deve ser adicionado no último index
    //Adiciona um novo elemento ao final do vetor;
    //COMPLEXIDADE: O(1), visto que sempre será adicionado ao final do vetor
    void array_list_push_back(struct array_list *list, int value){
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

        int a = list->data[index], b = list->data[index+1], c = list->data[index+2];
        for(int i = 0; i<list->size; i++){
            if(i == index){
                for(int j = index; j < list->size; j++){
                    list->data[j+1] = a;
                    a = b;
                    b = c;
                    c = list->data[j+i];
                }
            }
        }

        list->data[index] = value;
        
        return list->size++;
    }

    void array_list_remove(struct array_list *list, int value, int index) {
    if (list == NULL || index < 0 || index >= list->size) {
        return; // Verificar se a lista é válida e se o índice está dentro dos limites
    }

    int i;
    int found = 0;

    // Procurar o elemento a ser removido a partir do índice fornecido
    for (i = index; i < list->size; i++) {
        if (list->data[i] == value) {
            found = 1;
            break;
        }
    }

        if (found) {
            // Remover o elemento encontrado
            for (; i < list->size - 1; i++) {
                list->data[i] = list->data[i + 1];
            }

            list->size--;

            // Verificar se é necessário diminuir a capacidade do array
            if (list->capacity - list->size >= 10) {
                int *new_data = (int *)realloc(list->data, sizeof(int) * (list->capacity - 10));
                if (new_data != NULL) {
                    list->data = new_data;
                    list->capacity -= 10;
                }
            }
        }
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
