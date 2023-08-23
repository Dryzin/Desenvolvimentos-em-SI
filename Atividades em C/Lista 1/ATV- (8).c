#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pegaseis() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(NULL));
    int lista[6] = {0};
    int n;
    printf("Escreva a quantida de dados jogados: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        int random_number = pegaseis();
lista[random_number - 1]= lista[random_number - 1] + 1;
        printf("Numero aleatorio: %d\n", random_number);
    }
    printf("\n");

     for (int i = 0; i < 6; i++) {
        printf("face: %d quantidade: %d \n", i + 1, lista[i]);
    }

    return 0;
}
