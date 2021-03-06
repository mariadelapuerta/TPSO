//
//  structs.h
//  
//
//  Created by Agustina Fainguersch on 3/23/13.
//
//

#ifndef _structs_h
#define _structs_h

#define PATH "/tmp/fifo"
#define MAX_PATH 256

typedef struct {
	char* file;
	int fileSize;
	int fileId;
	int numCopies;
	int state;
	int clientId;
} printItem;


typedef struct{
    int client_id;
    int file_size;
    int qty;
    char file[MAX_PATH];
} client;

typedef client * client_job;

#endif
