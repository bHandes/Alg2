#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int Pessoas;
	int Leve = 0, Moderado = 0, Pesado = 0, Intensivo = 0;
	printf ("\nQuantas pessoas serão entrevistadas?: ");
	scanf ("%d", &Pessoas);
	if (Pessoas <=0){
		do{
			printf ("\nQuantidade de pessoas deve ser maior que 0!\n");
			printf ("\nQuantas pessoas serão entrevistadas?: ");
			scanf (" %d",&Pessoas);
		}while (Pessoas <=0);
	}
	
	int Horas[Pessoas];
	for (int i=0; i<Pessoas; i++){
		printf ("\nPessoa %d, Quantas horas vc passa nas redes sociais?: ", i+1);
		scanf (" %d",&Horas[i]);
		if (Horas[i]<0 || Horas[i]>24) {
			do {
				printf ("\nQuantidade de horas deve ser maior ou igual a zero e menor ou igual a 24!\n");
				printf ("\nPessoa %d, Quantas horas vc passa nas redes sociais?: ", i+1);
				scanf ("%d",&Horas[i]);
			}while (Horas[i]<0 || Horas[i]>24);
		}
		if (Horas[i]<2) Leve++;
		if (Horas[i]>=2 && Horas[i]<4) Moderado++;
		if (Horas[i]>=4 && Horas[i]<7) Pesado++;
		if (Horas[i]>6) Intensivo++;
	}
	printf ("\nUso Leve (Até 1 hora diária): %d",Leve);
	printf ("\nUso Moderado (1 a 3 horas diárias): %d",Moderado);
	printf ("\nUso Pesado (4 a 6 horas diárias): %d",Pesado);
	printf ("\nUso Intensivo / Hiperconectado (Mais de 6 horas diárias): %d",Intensivo);
	
	if (Leve > Moderado && Leve > Pesado && Leve > Intensivo) printf ("\nO maior tempo de uso foi o Uso leve");
	if (Moderado > Leve && Moderado > Pesado && Moderado > Intensivo) printf ("\nO maior tempo de uso foi o Uso Moderado");
	if (Pesado> Leve && Pesado > Moderado && Pesado > Intensivo) printf ("\nO maior tempo de uso foi o Uso Pesado");
	if (Intensivo > Leve && Intensivo > Moderado && Intensivo > Pesado) printf ("\nO maior tempo de uso foi o uso Intensivo");
	
	if (Leve < Moderado && Leve < Pesado && Leve < Intensivo) printf ("\nO Menor tempo de uso foi o Uso leve");
	if (Moderado < Leve && Moderado < Pesado && Moderado < Intensivo) printf ("\nO Menor tempo de uso foi o Uso Moderado");
	if (Pesado < Leve && Pesado < Moderado && Pesado < Intensivo) printf ("\nO Menor tempo de uso foi o Uso Pesado");
	if (Intensivo < Leve && Intensivo < Moderado && Intensivo < Pesado) printf ("\nO Menor tempo de uso foi o uso Intensivo");
	
	return 0;
}
