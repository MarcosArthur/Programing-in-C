#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
float n1, n2, valor;

char operacao;
printf("Digite O primeiro Valor: ");
scanf("%f", &n1);
printf("Digite O Segundo Valor: ");
scanf("%f", &n2);
printf("digite +, -, /, *:  ");
fflush(stdin);
scanf("%c", &operacao);

switch(operacao){
    case '+':
       	valor = n1 + n2;
	    printf("A soma �: %.2f", valor);
    break;

    case '-':
        printf("A Subtra��o: %.2f", n1-n2);
    break;
    case '/':
    	valor = n1 / n2;
		printf("A Diviz�o: %.2f", n1 / n2);
		break;
	case '*':
		valor = n1 * n2;
		printf("A muktiplica��o: %.2f", n1*n2);
	break;
	default:
		printf("O pera��o N�o EXistente");
}
}
