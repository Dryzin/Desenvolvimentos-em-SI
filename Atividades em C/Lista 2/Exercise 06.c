#include <stdio.h>

int main(){
	int coluna1, linha1, coluna2, linha2;
	
	scanf("%d", &coluna1);
	scanf("%d", &linha1);
	scanf("%d", &coluna2);
	scanf("%d", &linha2);
	
	if(coluna1 != coluna2 || linha1 != linha2) {
		printf("Digite matrizes que contenham a mesma ordem!");
	} else{
	
		int matriz1[coluna1][linha1], matriz2[coluna2][linha2], i, j, soma = 0;
		
		printf("Numeros primeira matriz:\n");
		for(i = 0; i < coluna1; i++){
			for(j = 0; j < linha1; j++){
				scanf("%d", &matriz1[i][j]);
			}
		}
		
		printf("Numeros segunda matriz:\n");
		for(i = 0; i < coluna2; i++){
			for(j = 0; j < linha2; j++){
				scanf("%d", &matriz2[i][j]);		
			}
		}
		
		printf("A soma é:\n");
		for(i = 0; i < coluna1; i++){
			for(j = 0; j < linha1; j++){
				soma = matriz1[i][j] + matriz2[i][j];
				printf("%d ", soma);		
			}
			printf("\n");
		}
	}	
	return 0; 
}