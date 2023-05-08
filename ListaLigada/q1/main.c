#include <stdio.h>
#include "linked_list.h"

int main(){
    linked_list list01 = ll_create();
    int x;
    while (scanf("%d",&x)!=0)
    ll_push_front(list01,x);
    ll_write(list01,stdout);
    printf("\n");
    /* ll_destroy(list01); −−− TODO */
    return 0;
}