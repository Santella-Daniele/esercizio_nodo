#include <stdio.h>
#include "nodo.h"

int main (){
    
    Nodo n1;
    Nodo n2;
    Nodo n3;
    
    Nodo *testa = &n1;
    
    n1.valore = 5;
    n1.next = &n2;
    
    n2.valore = 6;
    n2.next = &n3;
    
    n3.valore = 8;
    n3.next = NULL;
    
    Nodo *tmp;
    
    tmp = testa;
    
    while (tmp != NULL){
        printf("%d \n",tmp->valore);
        tmp = tmp->next;
    }
    
    
    
    return 0;
}