#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL,"portuguese");
    float sales[5][3], totalPerSeller[5] = {0}, biggestSaleFirstMonth = 0, lowestSaleThirdMonth = 100000, totalPerMonth[3] = {0};
    char sellers[5][20];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do vendedor %d: ", i + 1);
        scanf("%19s", sellers[i]);
    }

    printf("\nDigite o valor da venda:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Vendedor: %d || Mês: %d: ", i + 1, j + 1);
            scanf("%f", &sales[i][j]);

            totalPerSeller[i] += sales[i][j];
            totalPerMonth[j] += sales[i][j];

            if (j == 0) {
                if (i == 0 || sales[i][j] > biggestSaleFirstMonth) {
                    biggestSaleFirstMonth = sales[i][j];
                }
            }

            if (j == 2) {
                if (i == 0 || sales[i][j] < lowestSaleThirdMonth) {
                    lowestSaleThirdMonth = sales[i][j];
                }
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("\nVendedor[%d]: %s:\n", i + 1, sellers[i]);
        for (int j = 0; j < 3; j++) {
            printf("\tMês[%d]: $%.2f\n", j + 1, sales[i][j]);
        }
        printf("Total por Vendedor[%d]: $%.2f\n", i + 1, totalPerSeller[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Total por Mês[%d]: $%.2f\n", i + 1, totalPerMonth[i]);
    }

    printf("Maior venda do 1º mês: $%.2f\n", biggestSaleFirstMonth);
    printf("Menor venda do 3º mês: $%.2f\n", lowestSaleThirdMonth);

    return 0;
}

