#include <stdio.h>
#include <math.h>

int main(){
	
	float salarioBruto, comissao, vendas, salarioNovo;
	
	printf("Qual o salario fixo: ");
	scanf("%f", &salarioBruto);
	printf("Qual o valor total de vendas: ");
	scanf("%f", &vendas);
	
	
	comissao = vendas *0.04;
	salarioNovo = comissao + salarioBruto;
	printf("O total de comissao foi de R$ %.2f \n", comissao);
	printf("O salario total ficara de R$ %.2f \n", salarioNovo);
	
	return 0;
}
