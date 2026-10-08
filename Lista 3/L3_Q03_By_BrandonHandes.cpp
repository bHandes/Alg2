#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 5

int main(){
	int Vetor[TAM];
	
	for (int i=1;i<TAM;i++) Vetor[i] = pow (i,3);
	for (int i=0;i<TAM;i++) printf(" %d",Vetor[i]);
	
	return 0;
}
