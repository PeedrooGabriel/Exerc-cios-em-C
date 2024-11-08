#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	const int age = 10, children = 2;
	int matrix[age][children], age2[age], cont = 0, spec = 0;
	float salary[age], average_sal = 0, average_child = 0, specific_average = 0;
	
	for(int i = 0;i < age;i++){
		printf("Informe sua idade:\n");
		scanf("%i", &matrix[i][0]);
		printf("Informe quantos filhos você tem:\n");
		scanf("%i", &matrix[i][1]);
		printf("Informe seu salário:\n");
		scanf("%f", &salary[i]);
		average_sal += salary[i];
		average_child += matrix[i][1];
		if(matrix[i][0] >= 15 && matrix[i][0] <= 25){
			cont+= matrix[i][1];
		}
		if(matrix[i][0] >= 20 && matrix[i][0] <= 30){
			specific_average += salary[i];
			spec++;
		}
	}
	average_sal /= age;
	average_child /= age;
	if(specific_average > 0){
		specific_average /= spec;
	}
	printf("======================\nIdade|Filho(s)|Sal�rio\n");
	for(int i = 0;i < age;i++){
		for(int j = 0;j < children;j++){
			printf("%i\t", matrix[i][j]);
		}
		printf("%.2f\n", salary[i]);
	}
	printf("\nMédia salarial da população: %.2f\n",average_sal);
	printf("Média do número de filhos: %.2f\n", average_child);
	printf("Quantidade de filhos das pessoas entre 15 a 25 anos: %i\n", cont);
	printf("Média salarial de pessoas entre 20 a 30 anos: %.2f\n", specific_average);
}
