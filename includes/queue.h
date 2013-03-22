#include <stdio.h>
#include <stdlib.h>

/* Estructuras */

typedef struct node{
	void * item;
	struct node * next;
}node;

typedef struct header{
	node* last;
	node* first;
} header;

typedef header * header_t;
typedef node * node_t;

/* Funciones */
header_t createList(void);
void push(header_t list, void * item);
void* pop(header_t list);
int isEmpty(header_t list);

void search(void);
