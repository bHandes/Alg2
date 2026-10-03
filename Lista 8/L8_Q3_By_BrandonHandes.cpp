#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
 int main (){
 	int Matriz[TAM][TAM];
 	int i, j;
 	
 	srand (time (NULL));
 	
 	for (i=0; i<TAM ; i++){
 		for (j=0; j< TAM; j++){
 			Matriz [i][j] = rand() % 10;
 			printf ("%d ", Matriz[i][j]);
		 }
		printf ("\n");
	 }
	 return 0;
 }
