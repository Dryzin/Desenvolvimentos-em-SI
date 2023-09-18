#include <stdio.h>
#include <limits.h>

int main(){
	int linha, coluna,matriz[linha][coluna], i, j, maior = INT_MIN;
	
	printf("Digite a qtd de linhas: ");
	scanf("%d", &linha);
	printf("Digite a qtd de colunas: ");
	scanf("%d", &coluna);
	
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
		    printf("Digite o numero: ");
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	
	printf("O maior número é: %d", maior);
	return 0; 
}