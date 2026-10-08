#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	char Vetor[TAM];
	char Copy;
	
	for (int i=0;i<TAM;i++) scanf (" %c",&Vetor[i]);
	
	for (int i=0;i<TAM;i+=2){
		Copy=Vetor[i];
		Vetor[i]=Vetor[i+1];
		Vetor[i+1]=Copy;
	}
	
	for (int i=0;i<TAM;i++) printf ("%c ",Vetor[i]);
	
	return 0;
}
