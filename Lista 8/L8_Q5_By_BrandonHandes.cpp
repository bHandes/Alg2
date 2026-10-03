#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(){
	int Matriz1[TAM][TAM], Matriz2[TAM][TAM], Matriz3[TAM][TAM];
	int i, j;
	for (i=0;i<TAM;i++){
		for (j=0; j<TAM; j++){
			scanf ("%d ", &Matriz1[i][j]);
		}
	}
	for (i=0;i<TAM;i++){
		for (j=0; j<TAM; j++){
			scanf ("%d ", &Matriz2[i][j]);
		}
	}
	for (i=0;i<TAM;i++){
		for (j=0; j<TAM; j++){
			Matriz3[i][j] = Matriz1[i][j] + Matriz2[i][j];
		}
	}
	for (i=0;i<TAM;i++){
		for (j=0; j<TAM; j++){
			printf ("%d ", Matriz3[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
