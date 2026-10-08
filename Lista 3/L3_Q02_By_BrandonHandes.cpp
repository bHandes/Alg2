#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(){
	int Vetor[TAM];
	
	Vetor[0]=1;
	printf ("%d",Vetor[0]);
	
	for (int i=1;i<TAM;i++) Vetor[i]= Vetor[i-1] + 2;
	
	for (int i=1;i<TAM; i++) printf ("\t%d",Vetor[i]);
	
	return 0;
}
