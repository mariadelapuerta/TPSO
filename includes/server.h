typedef struct {

	char** file;
	int fileSize;
	int fileId;
	int numCopies;
	int state;
	int clientId;
} printItem;

/* Producer*/
void receive(char* file);
void send(int id);

/*Consumer*/
void push(printItem item);
printItem pop();
int isEmpty();
printItem search(int fileId);


