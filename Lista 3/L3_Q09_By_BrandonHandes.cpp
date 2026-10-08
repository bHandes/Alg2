#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int main(){
	int Vetor1[TAM];
	int Vetor2[TAM];
	
	for (int i=0;i<TAM;i++) scanf ("%d",&Vetor1[i]);
	printf ("\nVetor 1: ");
	for (int i=0;i<TAM;i++) printf ("%d ",Vetor1[i]);
	
	Vetor2[0]=Vetor1[0];
	for (int i=1;i<TAM;i++) {
		Vetor2[i] = Vetor2[i-1]+Vetor1[i];
	}
	
	printf ("\nVetor 2: ");
	for (int i=0;i<TAM; i++) printf ("%d ",Vetor2[i]);
	
	return 0;
}
