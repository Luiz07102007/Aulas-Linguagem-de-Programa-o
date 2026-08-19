/*
	Name: SomaNumeros.cpp
	Author: Luiz F Rodrigues
	Date: 19/08/26 09:49
	Description: Programa para somar dois números por meio de uma função 
*/
//Sessão de importação
#include<stdio.h>	
#include<locale.h>

//Sessão de prototipação
int somar(int, int);

main() 
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, soma;
	a = b = soma = 0;

	printf("digite o valor de A: ");
	scanf("%d",&a);
	printf("digite o valor de B: ");
	scanf("%d",&b);
	soma = somar(a,b);
	printf("a soma de %d e %d é: %d",a,b,soma);
}

//Função Soma
int somar(int a, int b){
	int result = 0;
	result = a+b;
	return result;
}


//fim do programa
