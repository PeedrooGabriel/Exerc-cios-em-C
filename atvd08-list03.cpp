#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	const int row = 2, column = 6;
	int matrix[row][column], highest_num = 0, add = 0, average = 0, row_average;
	
	for(int i = 0;i < row;i++){
		row_average = 0;
		for(int j = 0;j < column;j++){
			printf("Informe os n�meros da matriz:\n");
			scanf("%i", &matrix[i][j]);
			if(matrix[i][j] > highest_num){
				highest_num = matrix[i][j];
			}
			if(matrix[i][j] % 3 == 0){
				add += matrix[i][j];
			}
			average += matrix[i][j];
			row_average += matrix[1][j];
		}
	}
	for(int i = 0;i < row;i++){
		for(int j = 0;j < column;j++){
			printf("%i\t",matrix[i][j]);
		}
		printf("\n");
	}
	average /= (row * column);
	row_average /= column;
	
	printf("Maior n�mero da matriz: %i\n", highest_num);
	printf("Soma dos n�meros m�ltiplos de 3 da matrix: %i\n", add);
	printf("m�dia dos n�meros da segunda linha da matriz: %i \n", row_average);
	printf("m�dia dos n�meros da matriz: %i \n",average);
	printf("Matriz multiplicada pela m�dia:\n\n");
	for(int i = 0;i < row;i++){
		for(int j = 0;j < column;j++){
			matrix[i][j] *= average;
			printf("%i\t",matrix[i][j]);
		}
		printf("\n");
	}
}