#include <stdio.h>
#include <stdlib.h>
#define TAM 15
int main (){
	int Numero[TAM];
	int Maior=0;
	
	for (int i=0; i < TAM; i++){
		scanf ("%d", &Numero[i]);
		if (i==0) Maior = Numero[0];
		if (Numero[i]>Maior) Maior = Numero[i];
	}
	
	for (int i=0;i < TAM; i++){
		if (Numero[i] == Maior) printf ("\n\nO Numero %d e o maior: %d",i+1,Maior);
	}
	
	return 0;
}
