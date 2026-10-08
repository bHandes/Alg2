#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 14

int main(){
	char Cpf[TAM];
	
	for (int i=0;i<TAM;i++) scanf(" %c",&Cpf[i]);
	for (int i=0;i<TAM;i++){
		if (i<=2 || i>=12){
			Cpf[i] = '#';
		}
		printf("%c",Cpf[i]);
	}
	
	return 0;
}
