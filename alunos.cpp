#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, alunos;
	printf("Digite a Quantidade de Alunos : ");
	scanf("%d", &alunos);
	
	int medias[alunos];
	
	printf("Digite as Notas dos Alunos : ");
	for (i = 0 ; i < alunos ; i++){
		scanf("%d", &medias[i]);
	}
	for ( i = 0 ; i < alunos ; i++){
	    if(medias[i]>=7){
	     	printf("A Nota %d Est� Acima da M�dia\n", medias[i]);
	    }
	    if(medias[i]<7){
	    	printf("A Nota %d Est� Abaixo da M�dia\n", medias[i]);
	    }
}
}

