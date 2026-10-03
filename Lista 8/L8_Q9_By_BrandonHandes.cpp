#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
	int Matriz[TAM][TAM];
	int i, j;
	
	for (i=0;i<TAM;i++){
		for (j=0;j<TAM;j++){
			printf ("Elemento[%d][%d]: ",i,j);
			scanf ("%d",&Matriz[i][j]);
		}
	}
	
	int Simetria = 0;
	
	for (i=0;i<TAM;i++){
		for (j=0;j<TAM;j++){
			if (Matriz[i][j]!=Matriz[j][i]) Simetria = 1;
		}
	}
	if (Simetria==1){
	printf ("A Matriz nao e simetrica");
	}else printf ("A Matriz e simetrica");
	
	return 0;
}
