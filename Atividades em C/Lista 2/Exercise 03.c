#include <stdio.h>

int main(){
	int linhas, colunas, x, matriz[linhas][colunas], i, j, contador = 0; 
	
	printf("Digite a qtd de linhas: ");
	scanf("%d", &linhas);
	printf("Digite a qtd de colunas: ");
	scanf("%d", &colunas);
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] == x){
				contador++;
			}
		}
	}
	
	printf("Têm %d Números iguais a: %d", contador, x);
	return 0; 
}