#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
	int Notas[TAM];
	int Media = 0;
	
	for (int i=0; i<TAM; i++){
		printf ("%da Nota\n", i+1);
		scanf ("%d",&Notas[i]);
		Media = Media + Notas[i];
	}
	Media = Media / TAM;
	printf ("\nA media foi: %d\n", Media);
	
	for (int i=0; i<TAM; i++){
		if (Notas[i] > Media){
			printf ("a Nota %da ficou acima da media sendo: %d\n", i+1,Notas[i]);
		}
	}
	
	return 0;
}
