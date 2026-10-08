#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	int Vetor[TAM];
	
	for (int i=0; i<TAM; i++) scanf (" %d", &Vetor[i]);
	printf ("\nVetor com notas: ");
	for (int i=0; i<TAM; i++) printf ("%d ", Vetor[i]);
	
	for (int i=0; i<TAM; i++){
		if (Vetor[i]<=0) Vetor[i]= 0;
	}
	
	printf ("\nVetor tratado: ");
	for (int i=0; i<TAM; i++) printf ("%d ",Vetor[i]);
	
	return 0;
}
