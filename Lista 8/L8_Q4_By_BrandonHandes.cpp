#include <stdio.h>
#include <stdlib.h>

#define TAM_i 3
#define TAM_j 5

int main (){
	int Matriz[TAM_i][TAM_j];
	int i, j, Coluna;
	
	for (i=0;i<TAM_i;i++){
		for (j=0;j<TAM_j;j++){
			printf ("Elemento[%d][%d]: ",i,j);
			scanf("%d",&Matriz[i][j]);
			printf("\n");
		}
	}
	printf ("Coluna para imprimir: ");
	scanf ("%d", &Coluna);
	printf ("Elementos da Coluna: ");
	for (i=0;i<TAM_i;i++){
		printf("%d ", Matriz[i][Coluna]);
	}
	return 0;
}
