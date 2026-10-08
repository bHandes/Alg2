#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int main(){
	int Vetor[TAM];
	
	for (int i=0;i<TAM/2;i++) Vetor[i] = 0;
	for (int i=TAM/2;i<TAM;i++) Vetor[i] = 1;
	for (int i=0;i<TAM;i++) printf ("%d ",Vetor[i]);
	
	return 0;
}
