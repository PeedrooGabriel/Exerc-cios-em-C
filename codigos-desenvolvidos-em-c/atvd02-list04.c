#include <stdio.h>
#include <locale.h>

#define ROW 3
#define COLUMN 5 

int smallest_num(int a_mat[][COLUMN]){
	int smallest;
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COLUMN;j++){
			if(i == 0 && j == 0){
				smallest = a_mat[i][j];
			}
			else if(a_mat[i][j] < smallest){
				smallest = a_mat[i][j];
			}
		}
	}
	return smallest;
}
int multiple_check(int b_mat[][COLUMN]){
	int add = 0;
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COLUMN;j++){
			if(b_mat[i][j] % 3 == 0){
				add += b_mat[i][j];
			}
		}
	}
	return add;
}
int matrix_column(int c_mat[][COLUMN]){
	int largest_num = 0;
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COLUMN;j++){
			if(c_mat[i][2] > largest_num){
				largest_num = c_mat[i][j];
			}
		}
	}
	return largest_num;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int matrix[ROW][COLUMN], smallest = 0, multiple_add = 0, largest = 0;
	
	for(int i = 0;i < ROW;i++){
		for(int j = 0;j < COLUMN;j++){
			printf("Informe os números da matriz[%i][%i]\n", i, j);
			scanf("%i", &matrix[i][j]);
		}
	}
	smallest = smallest_num(matrix);
	multiple_add = multiple_check(matrix);
	largest = matrix_column(matrix);
	printf("===============\n");
	printf("Menor número: %i\n", smallest);
	printf("Soma dos números múltiplos de 3: %i\n", multiple_add);
	printf("Maior número da 3ª coluna: %i\n", largest);
	
	return 0;
}
