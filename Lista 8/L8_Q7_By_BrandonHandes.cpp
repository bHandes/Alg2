#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM_i 5
#define TAM_j 6

int main(){
	int Matriz[TAM_i][TAM_j];
	int i, j, Soma;
	srand (time(NULL));
	
	for (i=0;i<TAM_i;i++){
		for(j=0; j<TAM_j;j++){
			Matriz[i][j] = rand() % 10;
			printf ("%d ",Matriz [i][j]);
		}
	printf ("\n");
	}
	printf ("\n");
	j=0;
	Soma=0;
	for (i=0;i<TAM_i; j++){
		Soma = Soma + Matriz[i][j];

		if (j==TAM_j-1){
		printf ("Soma da Linha %d: %d \n", i, Soma);
		
		Soma = 0;
		j=-1;
		i++;
		}
	}
	printf ("\n");
	i=0;
	Soma=0;
		for (j=0;j<TAM_j; i++){
		Soma = Soma + Matriz[i][j];

		if (i==TAM_i-1){
		printf ("Soma da coluna %d: %d \n", j, Soma);
		
		Soma = 0;
		i=-1;
		j++;
		}
	}
	
	
	
	return 0;
}
