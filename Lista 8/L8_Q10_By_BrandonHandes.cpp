#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main(){
	int Matriz[TAM][TAM];
	int VetorMaior[TAM], VetorMenor[TAM];
	int i, j;
	srand (time(NULL));
	
	for (i=0;i<TAM;i++) VetorMaior[i]=0;
	for (i=0;i<TAM;i++) VetorMaior[i]=0;
	
	for (i=0;i<TAM;i++){
		for (j=0;j<TAM;j++){
			Matriz[i][j] = rand () % 100;
			printf ("%d\t",Matriz[i][j]);
		}
		printf ("\n");
	}
	VetorMaior[0] = Matriz[0][0];
	VetorMenor[0] = Matriz[0][0];
	for (i=0;i<TAM;i++){
		VetorMaior[i] = Matriz[i][0];
		for (j=0;j<TAM;j++){
			if (Matriz[i][j]>VetorMaior[i]){
				VetorMaior[i] = Matriz[i][j];
			}
		}
	}
	for (j=0;j<TAM;j++){
		VetorMenor[j] = Matriz[0][j];
		for (i=0;i<TAM;i++){
			if (Matriz[i][j]<VetorMenor[j]){
			VetorMenor[j] = Matriz[i][j];
			}
		}
	}
	printf ("\nVetor maior: ");
	for (i=0;i<TAM;i++){
		printf("%d ",VetorMaior[i]);
	}
	printf ("\nVetor menor: ");
	for (i=0;i<TAM;i++){
		printf("%d ",VetorMenor[i]);
	}
	return 0;
}
