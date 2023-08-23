#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n, i, cont = 0 , valorVerificado;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	
	for(i = 0; i < n; i++){
		printf("Digite o %d° valor: ", i +1);
		scanf("%d", &vet[i]);
		}
	
	printf("Digite o valor que gostaria de identificar: ");
	scanf("%d", &valorVerificado);
	
	for(i = 0; i < n; i++)
		if(vet[i] == valorVerificado)
			cont++;
		
	
	printf("Quantidade de vezes que %d aparece no vetor: %d. \n", valorVerificado, cont);
	
	for(i = 0; i < n; i++)
		printf("%d | ", vet[i]);
			
	return 0;
}
