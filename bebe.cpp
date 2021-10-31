// feito para praticar os conhecimentos das primeiras aulas da faculdade.
// bem simples mas fiz sozinho e sem referências

#include<stdio.h>

struct cadastroBebe{
	int idade;
	char nome[15];
	char mae[15];
	float peso;
	int indice;
};

int main(void){

	bool condicaoLoop = true;
	int menu;
	int indiceAtual = 0;
	int indiceConsulta;
	struct cadastroBebe bebe[100];
	
	printf("Bem vindo ao sistema de cadastro de bebes");
	do{
		printf("\n\nDigite o indice da opcao desejada:\n\n1 - Cadastrar bebe\n2 - Consultar cadastro de bebe\n3 - Sair\n\nOpcao --> ");
		scanf("%d",&menu);
		switch (menu){
			case 1:{ // cadastrar bebe
				printf("\nSera cadastrado agora o bebe de indice %d\n\nDigite a idade em meses do bebe: ",indiceAtual);
				scanf("%d",&bebe[indiceAtual].idade);
				printf("Digite o primeiro nome do bebe: ");
				scanf("%s",&bebe[indiceAtual].nome);
				printf("Digite o nome da mae do bebe: ");
				scanf("%s",&bebe[indiceAtual].mae);
				printf("Digite o peso do bebe em Kg: ");
				scanf("%f",&bebe[indiceAtual].peso);
				bebe[indiceAtual].indice = indiceAtual;
				indiceAtual++;
				break;
			}
			case 2:{ //consultar cadastro
				printf("\nDigite o indice do cadastro a ser consultado: ");
				scanf("%d",&indiceConsulta);
				if (indiceConsulta < indiceAtual){
					printf("\nSegue abaixo os dados do bebe:\n\nIdade: %d mes\nNome: %s\nNome da mae: %s\nPeso: %.2f Kg",bebe[indiceConsulta].idade,bebe[indiceConsulta].nome,bebe[indiceConsulta].mae,bebe[indiceConsulta].peso);		
				}else{
					if (indiceAtual > 0){
					printf("\n\nNao tem crianca cadastrada nesse indice. Apenas temos cadastro ate o indice %d",indiceAtual-1);
					}else{
						printf("\n\nNao tem nenhuma crianca cadastrada.");
					}
				}
				break;
			}
			case 3:{ //sai do loop
				condicaoLoop = false;
				break;
			}
			default:{ // opcao invalida
				printf("\nNao existe essa opcao!!!!\n\n");
				break;
			}
		}
		}while (condicaoLoop == true);
		printf("\n\n\n\n\nObrigado por utilizar nosso sistema!\n\n\n");
}

