#include <stdio.h>
#include <math.h>

int main(){
	
	float preco, desconto, preco_novo;
	
	printf("Valor do produto: ");
	scanf("%f", &preco);
	
	desconto = preco * 0.10;
	preco_novo = preco - desconto;
	
	printf("Com 10 por cento de desconto seu produto fica de: %f", preco_novo);
	
	return 0;
}
