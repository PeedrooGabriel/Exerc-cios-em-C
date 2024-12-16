#include <stdio.h>
#include <locale.h>

#define ROW 5
#define COLUMN 4

void average_function(float matrix[][COLUMN], float average_result[ROW]){
	for(int i = 0;i < ROW;i++){
		average_result[i] = 0;
		for(int j = 0;j < COLUMN;j++){
			average_result[i] += matrix[i][j]; 
		}
	}
	for(int i = 0;i < ROW;i++){
		average_result[i] /= COLUMN;
	}
}
void result_function(float result[ROW], char name[ROW][15]){
	for(int i = 0;i < ROW;i++){
		printf("Média de %s: %.2f\n", name[i], result[i]);
	}
}
void print_matrix(float mat[][COLUMN]){
	printf("\n");
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COLUMN;j++){
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}
}
int main(){
	setlocale(LC_ALL, "portuguese");
	
	char name[ROW][15];
	float grade[ROW][COLUMN], average[ROW];
	
	for(int i = 0;i < ROW;i++){
		printf("Informe o nome do %i° aluno:\n", i + 1);
		scanf("%14s", name[i]);
		for(int j = 0;j < COLUMN;j++){
			printf("Informe a %iª nota de %s:\n", j + 1, name[i]);
			scanf("%f", &grade[i][j]);
		}
	}
	printf("\n==================\n");
	average_function(grade, average);
	result_function(average, name);
	print_matrix(grade);
	
	return 0;
}
