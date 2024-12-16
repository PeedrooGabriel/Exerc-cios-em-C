#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	const int row = 5, column = 4;
	char name[row][15], top_student[15];
	float matrix[row][column], average[row], highest_average = 0.0;
	
	for(int i = 0;i < row;i++){
		printf("Digite o nome do %i° aluno:\n", i + 1);
		scanf("%14s", name[i]);
		average[i] = 0;
		for(int j = 0;j < column;j++){
			printf("Informe a %iª nota de %s:\n", j + 1, name[i]);
			scanf("%f", &matrix[i][j]);
			average[i] +=matrix[i][j];
		}
		average[i] /= column;
		if(average[i] > highest_average){
			highest_average = average[i];
			strcpy(top_student, name[i]);
		}
	}
	printf("\n\nRelatório:\n");
	printf("\nNome e média dos alunos:\n");
	for(int i = 0;i < row;i++){
		printf("%s -> %.2f\n", name[i], average[i]);
	}
	printf("\n%s teve a maior média -> %.2f", top_student, highest_average);

	return 0;
}
