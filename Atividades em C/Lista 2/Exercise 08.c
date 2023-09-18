#include <stdio.h>

void leiaMatriz(double m[][3], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++)
        for (j = 0; j < cols; j++)
            scanf("%lf", &m[i][j]);
}

void printMatriz(double m[][3], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++)
            printf("%.2lf |", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    double mat1[3][3], mat2[3][3], mat3[3][3] = {0}, constante = 0;

    leiaMatriz(mat1, n, m);
    leiaMatriz(mat2, n, m);

    char escolha;
    do {
        printf("(a) somar as duas matrizes\n");
        printf("(b) subtrair a primeira matriz da segunda\n");
        printf("(c) adicionar uma constante às duas matrizes\n");
        printf("(d) imprimir as matrizes\n");
        printf("(e) sair\n");
        scanf(" %c", &escolha);

        int i, j;
        switch (escolha) {
            case 'a':
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++)
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
                break;
            case 'b':
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++)
                        mat3[i][j] = mat1[i][j] - mat2[i][j];
                }
                break;
            case 'c':
                printf("Digite o valor da constante: ");
                scanf("%lf", &constante);
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        mat1[i][j] += constante;
                        mat2[i][j] += constante;
                    }
                }
                break;
            case 'd':
                printMatriz(mat1, n, m);
                printMatriz(mat2, n, m);
                printMatriz(mat3, n, m);
                break;
            case 'e':
                break;
            default:
                printf("Digite uma opção válida.\n");
        }
    } while (escolha != 'e');

    return 0;
}
