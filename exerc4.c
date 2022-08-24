#include <stdio.h>
#include <math.h>


int main(){

	float custo, preco;
	int resultado;
	
	printf("Custo da peca teatral: ");
	scanf("%f", &custo);
	printf("Preco do convite: ");
	scanf("%f", &preco);
	
	resultado = custo / preco;
	printf("Deve-se vender %d convites", resultado);
	
	return 0;
}
