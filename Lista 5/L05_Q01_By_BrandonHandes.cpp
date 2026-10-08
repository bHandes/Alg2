#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){
	char Vetor[TAM];
	char VetorClone[TAM];
	
	for (int i=0;i<TAM;i++) scanf(" %c",&Vetor[i]);
	int j=0;
	for (int i=TAM-1;i>=0;i--){
		VetorClone[j]=Vetor[i];
		j++;
	}
	for (int i=0;i<TAM;i++) printf ("%c ",VetorClone[i]);
	
	return 0;
}
