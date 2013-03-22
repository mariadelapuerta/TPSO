#include "./../includes/queue.h"

/* Crea una nueva lista*/
header_t createList(void){
	return (header_t)calloc(1, sizeof(header));

}

/* Agrega un elemento al final de la cola*/
void push(header_t list, void * item) {
	node_t newNode;
	/* Si no existe la lista sale*/
	if(list == NULL){
		return;
	}
	
	/* Creo el nuevo nodo y lo inicializo*/
	newNode = (node_t)calloc(1,sizeof(node));
	newNode->item = item;
	newNode->next = NULL;
	
	/* Se fija si hay un primer elemento y guarda donde corresponde */
	if( list->first == NULL){
		list->first = newNode;
		list->last = newNode;
		
	}else{
		list->last->next = newNode;
		list->last = newNode;
	}
}



/* Saca el primer elemento de la cola */
void* pop(header_t list){
	node_t current;
	void * ans;
	if(list->first == NULL){
		return;
	}
	current = list->first;
	list->first = current->next;
	ans = current->item;
	free(current);
	return ans;
}

/* Pendiente la definicion, dado que para buscar hay que comparar y para eso hay 
   que castear el void* a algo */
void search(void){
	printf("Search\n");
}

/* Devuelve 1 si la lista esta vacia, 0 en caso contrario*/
int isEmpty(header_t list){
	if(list == NULL){
		return 1;
	}
	
	if(list->first == NULL){
		return 1;
	}
	return 0;
}

/* Programa de prueba */
int main(void){
	header_t list;
	int i,k;
	char * a = "hola", * b = "mundo", * c = "chau";
	char * s;

	list = createList();
	i = isEmpty(list);
	
	if(i == 1){
		printf("Lista vacia\n");	
	}else{
		printf("Lista No Vacia\n");
	}
	push(list,a);
	
	i = isEmpty(list);
	if(i == 1){
		printf("Lista vacia\n");	
	}else{
		printf("Lista No Vacia\n");
	}	
	push(list,b);

	i = isEmpty(list);
	if(i == 1){
		printf("Lista vacia\n");	
	}else{
		printf("Lista No Vacia\n");
	}
	push(list,c);

	i = isEmpty(list);
	if(i == 1){
		printf("Lista vacia\n");	
	}else{
		printf("Lista No Vacia\n");
	}
	
	for(k = 0; k < 3; k++){
		s = pop(list);
		printf("%s\n",s);
	}

	i = isEmpty(list);
	if(i == 1){
		printf("Lista vacia\n");	
	}else{
		printf("Lista No Vacia\n");
	}
}
