#include <stdio.h>

int main() {
    int linhas, colunas, i, j;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz1[linhas][colunas], matriz2[linhas][colunas], soma[linhas][colunas];

    printf("\nDigite os elementos da primeira matriz:\n");
    for (i = 1; i < linhas+1; i++) {
        for (j = 1; j < colunas+1; j++) {
            printf("Digite o elemento (%d,%d): ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz:\n");
    for (i = 1; i < linhas+1; i++) {
        for (j = 1; j < colunas+1; j++) {
            printf("Digite o elemento (%d,%d): ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nA soma das duas matrizes é:\n");
    
    for (i =1 ; i < linhas +1; i++) {
        for (j = 1; j < colunas+1; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}

