#include <stdio.h>
#include <stdlib.h>

#define TAM 8

int main(){
	int Vetor1[TAM];
	int Vetor2[TAM];
	
	for (int i=0; i<TAM; i++) scanf (" %d",&Vetor1[i]);
	
	for (int i=0; i<TAM; i++) {
		if(i<TAM/2){
			Vetor2[i] = Vetor1[i+4];
		}else {
				Vetor2[i] = Vetor1[i-4];
			}
	}
	printf ("\nVetor 1: ");
	for (int i=0;i<TAM; i++) printf ("%d ",Vetor1[i]);
	
	printf ("\nVetor 2: ");
	for (int i=0;i<TAM; i++) printf ("%d ",Vetor2[i]);
	
	return 0;
}
