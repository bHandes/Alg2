#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
	int Matriz[TAM][TAM];
	int MatrizMod[TAM][TAM];
	int i, j, Contador = 1;
	
	printf ("Matriz: \n");
	for (i=0;i<TAM;i++){
		for (j=0;j<TAM;j++){
			Matriz[i][j]= Contador;
			MatrizMod[i][j] = Matriz [i][j];
			Contador++;
			printf ("%d\t",Matriz[i][j]);
		}
		printf("\n");
	}
	

	for (j=0;j<TAM;j++){
		MatrizMod[4][j] = Matriz[1][j];
		MatrizMod[1][j] = Matriz[4][j];
	}
		for (i=0;i<TAM;i++){
		MatrizMod[i][0] = Matriz[i][3];
		MatrizMod[i][3] = Matriz[i][0];
	}
	
	printf ("Matriz mod:\n");
	for (i=0;i<TAM;i++){
		for (j=0;j<TAM;j++){
			printf ("%d\t",MatrizMod[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
