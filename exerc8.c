#include <stdio.h>
#include <math.h>

int main(){

/*	
O comprimento de uma esfera, sabe-se que C = 2piR
A área de uma esfera, sabe-se que A = piR²
O volume de uma esfera, sabe-se que V = 4/3piR³
*/
	
	float raio, pi, comprimento, area, volume;
	
	printf("Qual o raio da esfera? \n");
	scanf("%f", &raio);
	
	pi = 3.14;
	comprimento = 2 * pi * raio;
	area = pi * (pow(raio, 2));
	volume = 4.0 / 3.0 * pi * (pow(raio, 3));
	
	printf("O raio da esfera e de: %.2f \n", raio);
	printf("O comprimento da esfera e de: %.2f \n", comprimento);
	printf("A area da esfera e de: %.2f \n", area);
	printf("O volume da esfera e de: %.2f \n", volume);	
	
	return 0;
	
}
