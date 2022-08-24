#include <stdio.h>
#include <math.h>

int main(){
	
	float cateto1, cateto2, hipotenusa, resultado, a, b;

	printf("Valor do cateto 1: ");
	scanf("%f", &cateto1);
	printf("Valor do cateto 2: ");
	scanf("%f", &cateto2);
	
	/*
	a = (pow(cateto1, 2));
	b = (pow(cateto2, 2));
	resultado = a + b;
	hipotenusa = (sqrt(resultado));
	printf("%.1f", hipotenusa);
	*/
	
	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
	printf("%.1f", hipotenusa);
	
	return 0;
}

