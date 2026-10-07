#include <stdio.h>
#include <math.h>
#define TAM 3
int main(){
	int Quantidade[TAM];
	float Preco[TAM];
	float Total=0;
	
	for (int i=0; i<TAM; i++){
		printf ("\nProduto %d:",i+1);
		scanf ("%d",&Quantidade[i]);
		printf ("\nValor do produto: ");
		scanf (" %f",&Preco[i]);
		Total = Total + (Quantidade[i] * Preco[i]);
	}
	printf ("\nTotal: %.2f\n",Total);
	
	for (int i=0; i<TAM; i++){
		if (Quantidade[i]>5){
			printf ("\nProduto %d acima de 5 unidades(%d), total do produto: %.2f",i+1,Quantidade[i],Preco[i]*Quantidade[i]);
		}
	}
	
	return 0;
}
