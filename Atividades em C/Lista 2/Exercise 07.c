#include <stdio.h>

int main(){
	int linha, coluna;
	double x;
	
	printf("Digite a quantidade de linha:\n");
	scanf("%d", &linha);
	printf("Digite a quantidade de coluna:\n");
	scanf("%d", &coluna);
	printf("Digite o x:\n");
	scanf("%lf", &x);
	
	printf("Digite os numeros:\n");
	int matriz[linha][coluna], i, j, multiplicador = 0; 
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			scanf("%d", &matriz[i][j]);
			}
	}
	
	printf("Resultado:\n");
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			multiplicador = matriz[i][j] * x;
			printf("%d ", multiplicador);		
		}
		printf("\n");
	}
	
	return 0; 
}