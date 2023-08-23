#include <stdio.h>
#include <locale.h>

int contarImpares(int a[],int b){
	int i, cont = 0;
	for(i = 0; i < b; i++){
		if(a[i] % 2 != 0){
			cont++;
		}
	}
	return cont;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	
	for(i = 0; i < n; i++){
		printf("Digite o %d° valor: ", i +1);
		scanf("%d", &vet[i]);
		}
	
	int cont = contarImpares(vet, n);
	
	printf("Quantidade de ímpares: %d.", cont);
			
	return 0;
}
