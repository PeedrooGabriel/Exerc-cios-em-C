#include <stdio.h>
#include <locale.h>

void perfect_number(int number){
	int add = 0;
	
	for(int i = 1;i <= number / 2;i++){
		if(number % i == 0){
			add += i;
		}
	}
	if(add == number){
		printf("O número %i é perfeito.", number);
	}else{
		printf("O número %i não é perfeito.", number);
	} 
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Digite um número para verificar se ele é perfeito:\n");
	scanf("%i", &num);
	perfect_number(num);
}
