#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	int Idades[TAM];
	int IdadeAmigo;
	
	printf ("\nInforme a idade dos 10 primeiros estudantes:\n");
	for (int i=0;i<TAM;i++)	scanf ("%d",&Idades[i]);
	
	printf ("\nIdade do amigo: ");
	scanf ("%d",&IdadeAmigo);
	int j=0;
	for (int i=0;i<TAM; i++){
		if (Idades[i]==IdadeAmigo){
			if(j==0){
				printf ("\nIdade %d foi encontrada nas posicoes: \n");
				j++;
			} 
			printf ("%d\n",i);
		}
	}
	
	if (j==0) printf ("Estudante nao encontrado na lista promocional!! %d",IdadeAmigo);
	
	return 0;
}
