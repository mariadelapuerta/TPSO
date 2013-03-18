#include <stdio.c>

#include "queue.h"

void push(void* item) {
	node* newNode;
	newNode = malloc(sizeof(node));	
	void* newItem = memcpy(item);
	newItem = item;
	newNode->item = newItem;
}
