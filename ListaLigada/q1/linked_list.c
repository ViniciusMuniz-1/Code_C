#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct linked_list_node{
    int value;
    struct linked_list_node *next;
};

struct linked_list{
    struct linked_list_node *head, *tail;
};

/* Cria e retorna uma nova lista com 0 elementos.
Se a lista não for criada retorna NULL (0) */
struct linked_list * ll_create(){
    struct linked_list * new_list;
    new_list = (struct linked_list*)malloc(sizeof(struct linked_list));
    if (new_list != 0){
    new_list->head=0;
    new_list->tail=0;
    }
    return new_list;
}

/* Inserir no início da lista */
void ll_push_back(linked_list list, int value){
    struct linked_list_node * new_element;
    new_element = (struct linked_list_node*)malloc(sizeof(struct linked_list_node));
    new_element->value = value;
    new_element->next = 0;
    if(list->head == 0){
        list->head = new_element;
    }
    else{
        list->tail->next = new_element;
    }
    list->tail = new_element;
}

void ll_push_front(linked_list list, int value){
    struct linked_list_node * new_element;
    new_element = (struct linked_list_node*)malloc(sizeof(struct linked_list_node));
    new_element->value = value;
    if(list->head == 0){
        new_element->next = 0;
        list->head = new_element;
        list->tail = new_element;
    }
    else{
        new_element->next = list->head;
        list->head = new_element;
    }
}

void ll_destroy(linked_list list){
    struct linked_list_node * current = list->head;
    while(current!=0){
        free(current);
        current = current->next;
    }
}

unsigned long long ll_size(linked_list list){
    int cont = 1;
    struct linked_list_node * current = list->head;
    while(current->next!=0){
        cont++;
        current = current->next;
    }
    return cont;
}

/* Imprime a lista no arquivo file*/
void ll_write(linked_list list){
    struct linked_list_node * current = list->head;
    while(current->next!=0){
        if(current->next == list->tail){
            printf("%d", current->value);
            current = current->next;
        }
        else{
            printf("%d->", current->value);
            current = current->next;
        }
    }
}

int main(){
    linked_list list01 = ll_create();
    int x = 1;
    while (x!=-1){
        scanf("%d",&x);
        ll_push_front(list01,x);
    }
    ll_push_back(list01, 100);
    ll_write(list01);


    /* ll_destroy(list01); −−− TODO */
    return 0;
}