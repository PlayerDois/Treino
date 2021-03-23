#include <stdio.h> // biblioteca "printf" e "scanf"
#include <math.h> // biblioteca de cálculos 

int main(){ // início do algoritmo
	double a, b, c, delta, x1, x2; // variáveis
	printf("Insira o valor de 'A': "); // impressão do texto na tela 
	scanf("%lf", &a); // valor que o usuario vai digitar para a respectiva variável (variavel A)
    printf("Insira o valor de 'B': "); // impressão do texto na tela 
	scanf("%lf", &b);// valor que o usuario vai digitar para a respectiva variável (variavel B)
    printf("Insira o valor de 'C': "); // impressão do texto na tela 
	scanf("%lf", &c); // valor que o usuario vai digitar para a respectiva variável (variavel C)
	
	delta = pow(b, 2) - 4*a*c; // lineariazação da formula de delta, com a função "pow" para calcular potencia

	if((delta < 0) or (a == 0)) { //condicionamento das quebra de padrões da bhaskara ('delta' MENOR que '0' ou 'A' IGUAL a '0')
		printf("Nao foi possivel calcular!"); // impressão do texto na tela do usuário
	}else 
	
	if(delta == 0){ // condicionamento de quando 'delta' for IGUAL a '0', portanto, apenas um valor de 'X'.
		x1 = (-(b) + sqrt(delta)) / 2*a; // lineariazação da fórmula de bhaskara (calculando x1 e x2), com a inclusão da função "sqrt" para calcular raiz quadrada
		printf("Os valores sao: \nX1: %.2lf \nX2: %.2lf", x1, x1); // impressão do texto na tela do usuário, com os respectivos valores de 'X1' e 'X2'.
	}else{ // um bhaskara normal, com duas raizes e delta positivo
		
		x1 = (-(b) + sqrt(delta)) / 2*a; // lineariazação da fórmula de bhaskara (calculando x1), com a inclusão da função "sqrt" para calcular raiz quadrada
		x2 = (-(b) - sqrt(delta)) / 2
		
		*a; // lineariazação da fórmula de bhaskara (calculando x2), com a inclusão da função "sqrt" para calcular raiz quadrada
		printf("Resultado: \nX1: %.2lf \nX2: %.2lf", x1, x2); // impressão do texto na tela do usuário, com os respectivos valores de 'X1' e 'X2'.
	}
	
	return 0; // retorno padrão da função "main"
} // fim do algoritmo
