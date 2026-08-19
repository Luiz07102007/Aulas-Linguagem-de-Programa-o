/*
	Name: SomaNumeros.cpp
	Author: Luiz F Rodrigues
	Date: 19/08/26 09:49
	Description: Programa para somar dois números por meio de uma função 
*/
//Sessão de importação
#include<stdio.h>	
#include<locale.h>

//Sessão de prototipação - Declarando funções
int somar(int, int);
int multiplicar(int, int);
float dividir(int, int);
int subtrair(int, int);
int calcularPotencia(int, int);
// inicio do main
main() 
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, soma,mult,sub,pot;
	float div;
	pot = sub = mult = a = b = soma = 0;
	div = 0.0;
	
	printf("digite o valor de A: ");
	scanf("%d",&a);
	printf("digite o valor de B: ");
	scanf("%d",&b);
	
	soma = somar(a,b);
	mult = multiplicar(a,b);
	div = dividir(a,b);
	sub = subtrair(a,b);
	pot = calcularPotencia(a,b);
	printf("a soma de %d e %d é: %d",a,b,soma);
	printf("\na multiplicação de %d e %d é: %d",a,b,mult);
	printf("\na divisão de %d por %d é: %.2f",a,b,div);
	printf("\na subtração de %d por %d é: %d",a,b,sub);
	printf("\n%d elevado a %d é: %d",a,b,pot);


} //fim do main


//Função Somar
int somar(int a, int b){
	int result = 0;
	result = a+b;
	return result;
}
//Função Multiplicar
int multiplicar(int a, int b) {
	int result = 0;
	result = a*b;
	return result;
}
//Função Dividir
float dividir(int a, int b) {
	float result = 0.0;
	result = (float)a/b;
	return result;
}
//Função Subtrair
int subtrair(int a, int b) {
	int result = 0;
	result = a-b;
	return result;
}
//Função calcularPotencia
int calcularPotencia(int a, int b) {
	int result = a;
	int i = 1;
	for (i;i < b;i++ ) {
		result = result*a;
	}
	return result;
}
//fim do programa
