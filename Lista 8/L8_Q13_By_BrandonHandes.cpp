#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
int main(){
	int Matriz[TAM][TAM];
	int i, j;
	int Maior;
	int PosMaior[2];
	int Menor;
	int PosMenor[2];
	
	srand (time(NULL));
	
	for (i=0;i<TAM;i++){
		for (j=0;j<TAM;j++){
			Matriz[i][j] = rand ()% 50;
			if (i==0 && j==0){
				Maior = Matriz[i][j];
				PosMaior[0]=i;
				PosMaior[1]=j;	
				Menor = Matriz[i][j];
				PosMenor[0]=i;
				PosMenor[1]=j;
			}else{
				if (Matriz[i][j]>Maior){
					Maior = Matriz[i][j];
					PosMaior[0]=i;
					PosMaior[1]=j;
				}
				if (Matriz[i][j] < Menor){
					Menor = Matriz[i][j];
					PosMenor[0]=i;
					PosMenor[1]=j;
				}
			}
			printf ("%d\t",Matriz[i][j]);
		}
		printf ("\n");
	}
	
	printf ("Maior elemento:%d\nLinha: %d\nColuna: %d\n",Maior,PosMaior[0],PosMaior[1]);
	printf ("Menor elemento:%d\nLinha: %d\nColuna: %d\n",Menor,PosMenor[0],PosMenor[1]);
	
	return 0;
}
