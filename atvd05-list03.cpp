#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    const int rows = 7, columns = 10;
    int matrix[rows][columns];
    
    for (int i = 0; i < columns; i++) {
        int sum = 0;
        for (int j = 0; j < rows - 1; j++) {
            printf("Informe o número para a posição [%d][%d]: ", j, i);
            scanf("%d", &matrix[j][i]);
            sum += matrix[j][i];
        }
        matrix[rows - 1][i] = sum; 
    }
    printf("\nMatriz:\n");
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < columns; i++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
    printf("\nSoma das colunas:\n");
    for (int i = 0; i < columns; i++) {
        printf("Soma da coluna %d: %d\n", i + 1, matrix[rows - 1][i]);
    }
    return 0;
}

