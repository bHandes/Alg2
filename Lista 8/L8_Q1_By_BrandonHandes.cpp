#include <stdio.h>

#define TAM 5

int main(){
	int Matriz[TAM][TAM];
	int i, j;
	
	for (i=0; i < TAM; i++){
		for (j=0; j< TAM; j++){
			Matriz[i][j]= i;
		}
	}
	
	for (i=0; i<TAM; i++){
		for (j=0; j<TAM; j++){
			printf ("%d ", Matriz[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
