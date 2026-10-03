#include <stdio.h>
#include <stdlib.h>
#define TAM 18

int main(){
	int Matriz[3][6];
	int Vetor[TAM];
	int i, j;
	
	for (i=0;i<TAM;i++) scanf ("%d",&Vetor[i]);
	
	int k=0;
	
	for (i=0;i<3;i++){
		for (j=0;j<6;j++){
			Matriz[i][j] = Vetor[k];
			k++;
		}
	}

	for (i=0;i<3;i++){
		for (j=0;j<6;j++){
			printf ("%d\t",Matriz[i][j]);
		}
		printf ("\n");
	}	
	
	return 0;
}
