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


/* Ejecuta el Cliente */
int main(void){
	char command[1];
	system("clear");
	printMenu();
	while(1){
		scanf("%s", command);
			
		if(strcmp(command,"Imprimir") == 0){
			printf("Imprimir\n");
		}else if (strcmp(command,"Consultar estado") == 0){
			printf("Consultar estado\n");
		}else if (strcmp(command,"Pausar") == 0){
			printf("Pausar\n");
		}else if (strcmp(command,"Reanudar") == 0){
			printf("Reanudar\n");
		}else if (strcmp(command,"Cancelar") == 0){
			printf("Cancelar\n");
		}else if (strcmp(command,"Salir") == 0){
			return 0;
		}else{
			printf("Comando invalido\n");
		}
	}
	return 0;
}
