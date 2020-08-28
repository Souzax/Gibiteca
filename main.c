#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int c=0, i=1, d=1, ba=0;

struct dados{
	char titulo[100], editora[100];
	int num, band;
}gibi;

struct dados cad[100];
int main() {
	

//Aqui na função principal a primeira coisa que o programa faz é abrir o arquivo.txt e devolve pra struct todos os
//valores já armazenados antes no arquivo. Decidimos eliminar as funções para salvar e ler os arquivos e deixalas
//automaticas no programa para torna-lo mais prático para o usuário.
//O arquivo "bandeira" foi criado para controlar a entrada e saida de gibis do programa. Sempre que cadastra 1 gibi entra mais 1
//sempre que sai um gibi subtrai 1. Logo quando a bandeira for 0, não terá mais gibis cadastrados.
//Depois ele indica a função correspondente a escolha do usuário, ou sai do programa caso a escolha seja "0".
	
	
		int a=1, b=0;
			FILE*band;
			band=fopen("bandeira.txt", "r");
		
			FILE*dados;
			dados=fopen("dados.txt", "r");
			
			fscanf(band, "%d", &ba);
		do{
	while(!feof(dados)){
			fgets(&cad[i].titulo, "n", dados);
			fgets(&cad[i].editora, "n", dados);
			fscanf(dados, "%d", &cad[i].num);
			i++;
			b++;
			};

	void cadastro();
	void apagar();
	void listar();
	void proctitu();
	void procedit();
	
	
		system("cls");
		printf("====GIBITECA====");
	printf("\nO que voce deseja fazer?\n1 - Para cadastrar novos gibis\n2 - Para apagar gibi\n3 - Para listar todos os gibis\n4 - Para procurar gibis por titulo\n5 - Para procurar gibis pela editora\n0 - Para sair\n");
	scanf("%d", &a);
	
	switch(a){
		case 1:
			cadastro();
			break;
		case 2:
			apagar();
			break;
		case 3:
			listar();
			break;
		case 4:
			proctitu();
			break;
		case 5:
			procedit();
			break;
		case 0:
			a=0;
			break;
			
			default:
			printf("OPCAO NAO ENCONTRADA");
			break;
	return 0;
}
}while(a!=0);
fclose(band);
printf("VOCE SAIU!!!");
}