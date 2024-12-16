#include <stdio.h>
#include <locale.h>

#define VALUE 10

int smallest_num(int number[VALUE]){
	int smallest = 0;
	
	for(int i = 0;i < VALUE;i++){
		if(i == 0){
			smallest = number[i];
		}else if(number[i] < smallest){
			smallest = number[i];
		}
	}
	return smallest;
}
int add_function(int number[VALUE]){
	int add_num = 0;
	
	for(int i = 0;i < VALUE;i++){
		if(number[i] % 2 == 0 && number[i] > 10){
			add_num += number[i];		
		}
	}
	return add_num;
}
int odd_function(int number[VALUE]){
	int odd_num = 0;
	
	for(int i = 0;i < VALUE;i++){
		if(number[i] % 2 != 0){
			odd_num ++;		
		}
	}
	return odd_num;
}
int average_function(int number[VALUE]){
	int average = 0, count = 0;
	
	for(int i = 0;i < VALUE;i++){
		if(number[i] > 20){
			average += number[i];
			count++;		
		}
	}
	if(count > 0){
		average /= count;
	}
	return average;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num[VALUE], smallest_result = 0, add_result = 0, odd_count = 0, average_result = 0;
	
	for(int i = 0;i < VALUE;i++){
		printf("Digite um número:\n");
		scanf("%i", &num[i]);
	}
	smallest_result = smallest_num(num);
	add_result = add_function(num);
	odd_count = odd_function(num);
	average_result = average_function(num);
	
	printf("Menor número: %i\n", smallest_result);
	printf("Números pares maiores que 10: %i\n", add_result);
	printf("quantidade de números ímpares: %i\n", odd_count);
	printf("Média dos números maiores do que 20: %i\n", average_result);
	return 0;
}
