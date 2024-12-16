#include <stdio.h>
#include <locale.h>

#define VALUE 10

char prime_number(int number){
		
		int div = 0;
		
		for(int j = 1;j <= number;j++){
			if(number % j == 0){
				div++;
			}
			if(div > 2){
				break;
			}
		}
		if(div == 2){
			return 'S';
		}else{
			return 'N';
		}	
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	char result;
	int num[VALUE];
	
	for(int i = 0;i < VALUE;i++){
		printf("Digite um nímero para verificar se ele é primo:\n");
		scanf("%i", &num[i]);
	
		result = prime_number(num[i]);
		
		if(result == 'S'){
			printf("O número é primo.\n");
		}else{
			printf("O némero não é primo.\n");
		}
	}

	return 0;
}
