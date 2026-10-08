#include <stdio.h>
#include <stdlib.h>

#define TAM 7

int main(){
	int Dias[TAM];
	
	printf ("\nDigite a Temperatura de Domingo: ");
	scanf (" %d", &Dias[0]);
	
	printf ("\nDigite a Temperatura de Segunda-Feira: ");
	scanf (" %d", &Dias[1]);
	
	printf ("\nDigite a Temperatura de Terça-Feira: ");
	scanf (" %d", &Dias[2]);
	
	printf ("\nDigite a Temperatura de Quarta-Feira: ");
	scanf (" %d", &Dias[3]);
	
	printf ("\nDigite a Temperatura de Quinta-Feira: ");
	scanf (" %d", &Dias[4]);
	
	printf ("\nDigite a Temperatura de Sexta-Feira: ");
	scanf (" %d", &Dias[5]);
	
	printf ("\nDigite a Temperatura de Sabado: ");
	scanf (" %d", &Dias[6]);
	
	printf ("\nD: ");
	for (int i=0;i<Dias[0];i++) printf ("%c ",220);
	
	printf ("\nS: ");
	for (int i=0;i<Dias[1];i++) printf ("%c ",220);
	
	printf ("\nT: ");
	for (int i=0;i<Dias[2];i++) printf ("%c ",220);
	
	printf ("\nQ: ");
	for (int i=0;i<Dias[3];i++) printf ("%c ",220);
	
	printf ("\nQ: ");
	for (int i=0;i<Dias[4];i++) printf ("%c ",220);
	
	printf ("\nS: ");
	for (int i=0;i<Dias[5];i++) printf ("%c ",220);
	
	printf ("\nS: ");
	for (int i=0;i<Dias[6];i++) printf ("%c ",220);
	
	return 0;
}
