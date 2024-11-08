#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	const int size = 4;
	int matrix[size][size];
	
	for(int i = 0;i < size;i++){
		for(int j = 0;j < size;j++){
			printf("Informe os números da matriz:\n");
			scanf("%i", &matrix[i][j]);
		}
	}
	for(int i = 0;i < size;i++){
		for(int j = 0;j < size;j++){
			printf("%i \t", matrix[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < size; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][1];
        matrix[i][1] = temp;
        temp = matrix[i][2];
        matrix[i][2] = matrix[i][3];
        matrix[i][3] = temp;
    }
    printf("\n===========================\n\n");
	for(int i = 0;i < size;i++){
		for(int j = 0;j < size;j++){
			printf("%i \t", matrix[i][j]);
		}
		printf("\n");
	}
}
