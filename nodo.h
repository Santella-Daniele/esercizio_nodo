#ifndef NODO_H
#define NODO_H

struct nodo {
    int valore;
    struct nodo *next;
};
typedef struct nodo Nodo;

#endif