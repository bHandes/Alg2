#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 13

int main(){
	char NomeEmail[TAM] = {'R','u','i',' ','D','i','a','s',' ','R','e','i','s'};
	
	for (int i=0;i<TAM;i++) printf ("%c ",NomeEmail[i]);

	for(int i=0;i<TAM;i++){
		NomeEmail[i] = tolower(NomeEmail[i]);
		if (isspace(NomeEmail[i])) NomeEmail[i] = '_';
	}

	printf("\n");
	for (int i=0;i<TAM;i++) printf ("%c ",NomeEmail[i]);

	return 0;
}
