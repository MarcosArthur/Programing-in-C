#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cod, quantidade ;
	float aux;
	char cont;
	do{
		printf("Digite o Codico Do Produto: ");
		scanf("%d", &cod);
		printf("Digite a Quantidade do Produto: ");
		scanf("%d", &quantidade);
	switch(cod){
		case 100:
			aux = quantidade*1.20;
			printf("O Valor Do Pedido E: ");
			printf("%.2f", aux);
			break;
		case 101:
			aux = quantidade*1.50;
			printf("O Valor Do Pedido E: ");
			printf("%.2f", aux);
			break;
		case 103:
			aux = quantidade*2.20;
			printf("O Valor Do Pedido E: ");
			printf("%.2f", aux);
			break;
	}
		fflush(stdin);
		printf("\nDigite S ou N Para Continuar: ");
		scanf("%c", &cont);
		
	}
	while(cont == 's');	
}
