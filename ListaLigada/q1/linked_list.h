#ifndef __LINKED_LIST__
#define __LINKED_LIST__
#include <stdio.h>

typedef struct linked_list * linked_list;

/* Cria e retorna uma nova lista com 0 elementos.
Se a lista não for criada retorna NULL (0) */
struct linked_list * ll_create();

/* Inserir no início da lista */
void ll_push_front(linked_list list, int x);

/* Imprime a lista*/
void ll_write(linked_list list);

/* Conta quandidade de elementos da lista ligada*/
unsigned long long ll_size(linked_list list);

/* Destroi a lista ligada */
void ll_destroy(linked_list list);

#endif /* Linked List*/