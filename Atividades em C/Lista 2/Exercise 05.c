#include <stdio.h>

int main(){
	int linhas, colunas; 
	
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &linhas);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	
	int matriz[linhas][colunas], i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	int auxiliar = colunas - 1;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			if(j == auxiliar){
				printf("%d | ", matriz[i][j]);
				auxiliar--;
			} else{
				printf("  | ");
			}
		}
		printf("\n");
	}
	
	return 0; 
}