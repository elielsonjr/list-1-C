#include <stdio.h>
#include <math.h>

int main(){
	
	printf("=== Calculando area de um trapezio! ===\n");
	
	float baseMaior, baseMenor, resultadoSoma, altura, resultado;
	
	printf("Qual o tamanho da maior base? \n");
	scanf("%f", &baseMaior);
	printf("Qual o tamanho da menor base? \n");
	scanf("%f", &baseMenor);
	printf("Qual o tamanho da altura base? \n");
	scanf("%f", &altura);
	
//somar a base maior com a base menor, multiplicar o resultado pela altura e dividir por dois.

	resultado = altura * resultadoSoma / 2;
	
	printf("A area desse trapezio e de: %.2f", resultado);
	
}
