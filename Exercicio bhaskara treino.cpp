#include <stdio.h> // biblioteca "printf" e "scanf"
#include <math.h> // biblioteca de c�lculos 

int main(){ // in�cio do algoritmo
	double a, b, c, delta, x1, x2; // vari�veis
	printf("Insira o valor de 'A': "); // impress�o do texto na tela 
	scanf("%lf", &a); // valor que o usuario vai digitar para a respectiva vari�vel (variavel A)
    printf("Insira o valor de 'B': "); // impress�o do texto na tela 
	scanf("%lf", &b);// valor que o usuario vai digitar para a respectiva vari�vel (variavel B)
    printf("Insira o valor de 'C': "); // impress�o do texto na tela 
	scanf("%lf", &c); // valor que o usuario vai digitar para a respectiva vari�vel (variavel C)
	
	delta = pow(b, 2) - 4*a*c; // lineariaza��o da formula de delta, com a fun��o "pow" para calcular potencia

	if((delta < 0) or (a == 0)) { //condicionamento das quebra de padr�es da bhaskara ('delta' MENOR que '0' ou 'A' IGUAL a '0')
		printf("Nao foi possivel calcular!"); // impress�o do texto na tela do usu�rio
	}else 
	
	if(delta == 0){ // condicionamento de quando 'delta' for IGUAL a '0', portanto, apenas um valor de 'X'.
		x1 = (-(b) + sqrt(delta)) / 2*a; // lineariaza��o da f�rmula de bhaskara (calculando x1 e x2), com a inclus�o da fun��o "sqrt" para calcular raiz quadrada
		printf("Os valores sao: \nX1: %.2lf \nX2: %.2lf", x1, x1); // impress�o do texto na tela do usu�rio, com os respectivos valores de 'X1' e 'X2'.
	}else{ // um bhaskara normal, com duas raizes e delta positivo
		
		x1 = (-(b) + sqrt(delta)) / 2*a; // lineariaza��o da f�rmula de bhaskara (calculando x1), com a inclus�o da fun��o "sqrt" para calcular raiz quadrada
		x2 = (-(b) - sqrt(delta)) / 2
		
		*a; // lineariaza��o da f�rmula de bhaskara (calculando x2), com a inclus�o da fun��o "sqrt" para calcular raiz quadrada
		printf("Resultado: \nX1: %.2lf \nX2: %.2lf", x1, x2); // impress�o do texto na tela do usu�rio, com os respectivos valores de 'X1' e 'X2'.
	}
	
	return 0; // retorno padr�o da fun��o "main"
} // fim do algoritmo
