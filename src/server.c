#include <stdio.h>
//#include "../includes/server.h"
#include "../includes/queue.h"
#include "../includes/structs.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>


#define MAX_BUF 1024

int main(void){
    header_t currentJobs;
    header_t printedJobs;
    FILE * file;
    int i=0;
    //currentJobs = createList();
    //printedJobs = createList();
    client_job job;
    FILE * fd;
    char mesg[MAX_BUF];
    while(1){
        sleep(1);
        if ((file = fopen(PATH, "r")) != NULL) {
	    job = (client *) malloc(sizeof(client));

            fd = fopen(PATH, "r");

            fread(job,sizeof(client), 1, fd);
	    printf("ID: %d\n", job->client_id);
	    printf("Qty: %d\n", job->qty);
	    printf("File: %s\n", job->file);
            fclose(fd);
	    free(job);

        }else{
            printf("El archivo no existe\n");

        }
    }
}
