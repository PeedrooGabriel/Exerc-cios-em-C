#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	const int div = 6;
	int num[4][6], counter = 0, add = 0, add4 = 0;
	float average = 0;
	
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 6;j++){
			printf("Dig�te um n�mero:\n");
			scanf("%i", &num[i][j]);
			if(num[i][j] > 10 && num[i][j] < 30){
				counter++;
			}
			if(num[i][j] > 10 && num[i][j] % 2 == 0){
				add += num[i][j];
			}
			if(j == 3){
				add4 += num[i][j];
			} 
			if(i == 2){
				average += num[i][j];
				
			}
		}
	}
	average /= div;
	
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 6;j++){
			printf("%i\t", num[i][j]);
		}
		printf("\n");
	}
	
	printf("Quantidade de n�meros que est�o no intervalo entre 10 e 30: %i\n", counter);
	printf("Soma dos n�meros pares maiores do que 10: %i\n", add);
	printf("Soma dos n�meros que est�o na quarta coluna da matriz: %i\n", add4);
	printf("m�dia dos n�meros da matriz que est�o na terceira linha: %.2f", average);
}
