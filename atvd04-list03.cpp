#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	const int row = 4, column = 3, div_ag = 12;
	int matrix[row][column],div_prim, add = 0, primo = 0, greater = 0;
	float average = 0;
	
	for(int i = 0;i < row;i++){
		for(int j = 0;j < column;j++){
			printf("Dig�te um n�mero:\n");
			scanf("%i", &matrix[i][j]);
			if(i == 1 || i == 3){
				add += matrix[i][j];
			}
			div_prim = 0;
			for(int k = 1;k <= matrix[i][j];k++){
				if(matrix[i][j] % k == 0){
					div_prim++;
				}
				if(div_prim > 2){
					break;
					}
				}
				if(div_prim == 2){
				primo += matrix[i][j];
				}
				average += matrix[i][j];
				if(i == 0){
					greater = matrix[i][j];
				}else if(matrix[i][j] > greater){
					greater = matrix[i][j];
				}
		}
	}
	average /= div_ag;
	
	for(int i = 0;i < row;i++){
		for(int j = 0;j < column;j++){
			printf("%i\t",matrix[i][j]);		
		}
		printf("\n");
	}
	printf("\nSoma dos elementos que est�o na 2� e na 4� linha da matriz: %i\n", add);
	printf("Soma dos n�meros primos: %i\n", primo);
	printf("M�dia dos n�meros da matriz: %.2f\n", average);
	printf("Maior n�mero da matriz: %i", greater);
	
}
