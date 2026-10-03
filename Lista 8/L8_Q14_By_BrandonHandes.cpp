#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float Notas[10][3];
	float Maior[2], Menor[2];
	int i, j;
	int PosMaior[4], PosMenor[4];
	
	
	for (i=0;i<10;i++){
		j=0;
		printf("digite a %da nota da %da VA: ",i+1,j+1);
		scanf("%f",&Notas[i][j]);
		if (i==0&&j==0){
			Maior[j]=Notas[i][j];
			Menor[j]=Notas[i][j];
			PosMaior[0]=i;
			PosMaior[1]=j;
			PosMenor[0]=i;
			PosMenor[1]=j;
		}else{
		if (Notas[i][j]>Maior[j]){
			Maior[j] = Notas[i][j];
			PosMaior[0]=i;
			PosMaior[1]=j;
		}
			if (Notas[i][j]<Menor[j]){
			Menor[j] = Notas[i][j];
			PosMenor[0]=i;
			PosMenor[1]=j;
			}
		}	
	}
	
	
		for (i=0;i<10;i++){
		j=1;
		printf("digite a %da nota da %da VA: ",i+1,j+1);
		scanf("%f",&Notas[i][j]);
		if (i==0&&j==1){
			Maior[j]=Notas[i][j];
			Menor[j]=Notas[i][j];
			PosMaior[2]=i;
			PosMaior[3]=j;
			PosMenor[2]=i;
			PosMenor[3]=j;
		}else{
			if (Notas[i][j]>Maior[j]){
			Maior[j] = Notas[i][j];
			PosMaior[2]=i;
			PosMaior[3]=j;
			}
			if (Notas[i][j]<Menor[j]){
			Menor[j] = Notas[i][j];
			PosMenor[2]=i;
			PosMenor[3]=j;
			}
		}	
	}
	for (i=0;i<10;i++){
		Notas[i][2]= (Notas[i][0]*0.4) +(Notas[i][1]*0.6);
	}
	printf("\nNotas: ");
	for (i=0;i<10;i++){
		printf ("\n1a VA: %.2f, 2a VA: %.2f, Media Pond. %.2f",Notas[i][0],Notas[i][1],Notas[i][2]);
	}
	printf ("\nMelhor nota da primeira VA: %.2f\nLinha: %d\nColuna: %d",Maior[0],PosMaior[0],PosMaior[1]);
	printf ("\nPior nota da primeira VA: %.2f\nLinha: %d\nColuna: %d",Menor[0],PosMenor[0],PosMenor[1]);
	printf ("\nMelhor nota da segunda VA: %.2f\nLinha: %d\nColuna: %d",Maior[1],PosMaior[2],PosMaior[3]);
	printf ("\nPior nota da segunda VA: %.2f\nLinha: %d\nColuna: %d",Menor[1],PosMenor[2],PosMenor[3]);

	
	return 0;
}
