#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	char Gabarito[TAM];
	char Nota1[TAM];
	char Nota2[TAM];
	int Nota[2];
	printf ("\nGabarito:\n");
	for (int i=0;i<TAM;i++) scanf(" %c",&Gabarito[i]);
	printf ("\nAluno 1:\n");
	for (int i=0;i<TAM;i++) scanf(" %c",&Nota1[i]);
	printf ("\nAluno 2:\n");
	for (int i=0;i<TAM;i++) scanf(" %c",&Nota2[i]);
	
	Nota[0]=0;
	Nota[1]=0;
	for (int i=0;i<TAM;i++){
		if(Nota1[i] == Gabarito[i]) Nota[0]++;
		if(Nota2[i] == Gabarito[i]) Nota[1]++;
	}
	
	printf ("\nNota do aluno 1: %d",Nota[0]);
	printf ("\nNota do aluno 2: %d",Nota[1]);
	
	
	return 0;
}
