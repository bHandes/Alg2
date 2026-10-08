#include <stdlib.h>
#include <stdio.h>

#define TAM 24

int main(){
	int Vetor[TAM];
	
	for (int i=0;i < TAM; i+=2) Vetor[i]=2;
	for (int i=1;i < TAM; i+=2) Vetor[i]=1;
	for (int i=0;i < TAM; i++) printf ("%d ",Vetor[i]);
	
	return 0;
}
