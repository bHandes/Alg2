#include <stdio.h>
#include <stdlib.h>

int main(){
	int Matriz[4][5];
	int Somalinha[5];
	int Total=0, i, j;
	
	for (i=0;i<4;i++){
		Somalinha[i]=0;
		for (j=0;j<5;j++){
			printf ("Elemento[%d][%d]: ",i,j);
			scanf ("%d",&Matriz[i][j]);
			Somalinha[i] = Somalinha[i] + Matriz[i][j];
		}
	}
	 
	for (i=0;i<4;i++){
		printf ("| ");
		for (j=0;j<5;j++){
			printf("%d\t",Matriz[i][j]);
			
		}
		printf ("|\t%d\n",Somalinha[i]);
	}
	
	for (i=0;i<5;i++){
		Total = Total + Somalinha[i];
	}
	
	
	printf ("\t\t\t\t\tTotal\t%d",Total);
	
	
	return 0;
}
