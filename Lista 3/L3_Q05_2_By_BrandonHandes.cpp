#include <stdio.h>
#include <stdlib.h>

#define TAM 7

int main(){
	int Vetor[TAM];
	int X,Y;
	
	for (int i=0;i<TAM;i++)scanf (" %d",&Vetor[i]);
	
	printf ("\nIndice 1: ");
	scanf (" %d",&X);
	
	printf ("\nIndice 2: ");
	scanf (" %d",&Y);
	
	printf ("\nSoma: %d",Vetor[X]+Vetor[Y]);
	
	return 0;
}
