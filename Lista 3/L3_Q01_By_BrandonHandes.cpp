#include <stdio.h>
#include <stdlib.h>
#define TAM 8
int main(){
	int Numero[TAM];
	int Maior, Menor;
	int PosMaior, PosMenor;
	
	for (int i=0; i<TAM; i++){
		printf ("\n%d Numero: ",i+1);
		scanf (" %d",&Numero[i]);
		if (i==0){
			Maior = Numero[i];
			Menor = Numero[i];
			PosMaior = i+1;
			PosMenor = i+1;
		}
		if (Numero[i]>Maior){
			Maior = Numero[i];
			PosMaior = i+1;
		}
		if (Numero[i]<Menor){
			Menor = Numero[i];
			PosMenor = i+1;
		}
	}
	
	printf ("\nPosicao do Maior elemento: %d", PosMaior);
	printf ("\nMaior elemento: %d", Maior);
	
	printf ("\nPosicao do Menor elemento: %d", PosMenor);
	printf ("\nMenor elemento: %d", Menor);
	return 0;
}
