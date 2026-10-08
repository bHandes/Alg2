#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 12

int main(){
	char Vetor[TAM];
	
	printf ("Informe as 12 letras:\n");
	for (int i=0;i<TAM;i++) scanf(" %c",&Vetor[i]);
	
	for (int i=0;i<TAM;i++){
		Vetor[i] = toupper(Vetor[i]);
		if (ispunct(Vetor[i])||isdigit(Vetor[i])) Vetor[i]= '*';
	}
	
	printf("\nVetor convertido:\n");
	for (int i=0;i<TAM;i++) printf ("%c",Vetor[i]);
		
	return 0;
}
