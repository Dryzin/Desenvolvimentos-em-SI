#include <stdio.h>
#include <limits.h>

int main(){
	int linha, coluna,matriz[linha][coluna], i, j, menor = INT_MAX;
	
	printf("Digite a qtd de linhas: ");
	scanf("%d", &linha);
	printf("Digite a qtd de colunas: ");
	scanf("%d", &coluna);
	
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
		    printf("Digite o numero: ");
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
	}
	
	printf("O menor número é: %d", menor);
	return 0; 
}