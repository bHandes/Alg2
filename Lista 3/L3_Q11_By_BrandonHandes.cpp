#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	float Historico[TAM];
	int Receitas=0;
	
	for (int i=0; i<TAM; i++){
		scanf (" %f",&Historico[i]);
		if (Historico[i]>0) Receitas++;
	}
	float ApenasReceitas[Receitas];
	int j=0;
	
	do{
		for (int i=0; i<TAM;i++){
			if (Historico[i]>0){
				ApenasReceitas[j] = Historico[i];
				j++;
			}
		}
	}while (j!=Receitas);
	
	for (int i=0;i<Receitas;i++) printf (" %.2f",ApenasReceitas[i]);
	
	return 0;
}
