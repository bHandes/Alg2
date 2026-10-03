#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main (){
	int Matriz[TAM][TAM];
	int i,j;
	
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			scanf ("%d",&Matriz[i][j]);
		}
	}
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
		 	if (i==j){
		 		printf ("# ");
			 }
			else{
				printf ("%d ", Matriz[i][j]);
			}
		}
		printf ("\n");
	}
	
	
	return 0;
}
