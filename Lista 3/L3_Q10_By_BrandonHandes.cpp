#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){
	int Vetor1[TAM];
	int Vetor2[TAM];
	int Vetor3[TAM*2];
	int i,j;
	
	printf ("\nVetor 1: ");
	for (i=0;i<TAM;i++) scanf (" %d",&Vetor1[i]);
	
	printf ("\nVetor 2: ");
	for (i=0;i<TAM;i++) scanf (" %d",&Vetor2[i]);
	
	Vetor3[0]=Vetor1[0];
	Vetor3[1]=Vetor2[0];
	j=1;
	for (i=2;i<TAM*2;i++){
		if (i%2==0){
			Vetor3[i]=Vetor1[j];
		}else {
			Vetor3[i]=Vetor2[j];
			j++;
		}
	}
	
	printf ("\nVetor1:");
	for (i=0;i<TAM;i++) printf(" %d |",Vetor1[i]);
	
	printf ("\nVetor2: ");
	for (i=0;i<TAM;i++) printf(" %d |",Vetor2[i]);
	
	printf ("\n\nVetor3: ");
	for (i=0;i<TAM*2;i++) printf(" %d |",Vetor3[i]);
	
	return 0;
}
