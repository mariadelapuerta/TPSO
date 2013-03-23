#include <stdio.h>
#include <string.h>

/* Imprime el Menu en pantalla */
void printMenu(void){
	printf("*************************\n");
	printf("* Gestor de Impresiones *\n");
	printf("*************************\n");
	printf("Menu de Opciones\n\n");
	printf("1- Imprimir + archivo\n");
	printf("2- Consultar estado + ID\n");
	printf("3- Pausar + ID\n");
	printf("4- Reanudar + ID\n");
	printf("5- Cancelar + ID\n");
	printf("6- Salir\n");
}

int printJob(void){
	return 1;
}

void c_print(void){
	char path[1];
	int *qty;
	int id;
	FILE * file;

	/* Ingresar directorio del archivo*/
	printf("Directorio del archivo:\n");
	scanf("%s",path);
	
	/* Verificar que exista el archivo */
	if ((file = fopen(path, "r")) == NULL) {
    		printf("El archivo no existe.\n");
		return;
    	}

	/* Ingresar cantidad de copias */
	printf("Cantidad de copias:\n");
	scanf("%d", qty);

	/* Llamar a Print back y que retorne el ID del trabajo*/

	id = printJob();

	if(id == 0){
		printf("El servidor no esta disponible\n");
	}else{
		printf("El archivo se imprimira su id es: %d\n", id);
	}

}

int jobStatus(int id){

	return 0;
};

void c_status(void){
	int *id;
	int result;

	printf("Ingrese el ID del trabajo que desea consultar:\n");
	scanf("%d",id);

	result = jobStatus(*id);

	switch(result){

	case 0: printf("El trabajo %d no existe.\n",*id);
		break;

	case 1: printf("El trabajo %d se termino de imprimir.\n",*id);
		break;

	case 2: printf("El trabajo %d se encuentra pausado.\n",*id);
		break;	
	}
}

int pauseJob(int id){
	return 0;
}

void c_pause(){

	int *id;
	int result;

	printf("Ingrese el ID del trabajo que desea pausar:\n");
	scanf("%d",id);

	result = pauseJob(*id);

	if( result == 0){
		printf("El trabajo %d no existe.\n",*id);
	}else{
		printf("El trabajo %d se encuentra pausado.\n",*id);
	}	
}

int cancelJob(int id){
	return 0;
}

void c_cancel(){

	int *id;
	int result;

	printf("Ingrese el ID del trabajo que desea cancelar:\n");
	scanf("%d",id);

	result = cancelJob(*id);

	if( result == 0){
		printf("El trabajo %d no existe.\n",*id);
	}else{
		printf("Se cancelo el trabajo %d.\n",*id);
	}	
}

int continueJob(int id){

	return 0;
}

void c_continue(){

	int *id;
	int result;

	printf("Ingrese el ID del trabajo que desea continuar:\n");
	scanf("%d",id);

	result = continueJob(*id);

	if( result == 0){
		printf("El trabajo %d no existe.\n",*id);
	}else{
		printf("El trabajo %d sera impreso.\n",*id);
	}	
}

/* Ejecuta el Cliente */
int main(void){
	char command[1];
	system("clear");
	printMenu();
	while(1){
		scanf("%s", command);
			
		if(strcmp(command,"Imprimir") == 0){
			c_print();
		}else if (strcmp(command,"Consultar") == 0){
			c_status();
		}else if (strcmp(command,"Pausar") == 0){
			c_pause();
		}else if (strcmp(command,"Reanudar") == 0){
			c_continue();
		}else if (strcmp(command,"Cancelar") == 0){
			c_cancel();
		}else if (strcmp(command,"Salir") == 0){
			return 0;
		}else{
			printf("Comando invalido\n");
		}
	}
	return 0;
}
