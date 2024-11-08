#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	const int div = 15;
	int num[3][5], smallest_num = 0, add = 0, largest_num = 0;
	float average = 0;
	
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 5;j++){
			printf("Digíte um número(linha %i - coluna %i):\n", i + 1, j + 1);
			scanf("%i", &num[i][j]);
			if(i == 0  && j == 0){
				smallest_num = num[i][j];
			}else if(num[i][j] < smallest_num){
				smallest_num = num[i][j];
			}
			if(num[i][j] % 3 == 0){
				add += num[i][j];
			}
			if(j == 2){
				if(i == 0){
					largest_num = num[i][j];
				}else if(num[i][j] > largest_num){
					largest_num = num[i][j];
				}
			}
			average += num[i][j];
		}
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 5;j++){
			printf("%i \t", num[i][j]);
		}
		printf("\n");
	}
		
	average /= div;
	
	printf("Menor número da matriz: %i\n", smallest_num);
	printf("Soma dos números múltiplos de 3: %i\n", add);
	printf("Maior número na terceira coluna: %i\n", largest_num);
	printf("Média dos números da matriz: %.2f\n", average);
	
	return 0;
}
