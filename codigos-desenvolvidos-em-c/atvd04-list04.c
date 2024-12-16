#include <stdio.h>
#include <locale.h>

#define VALUE 3

float average_function(float grade[VALUE], char type){
	float simple_arithmetic = 0, weighted_mean = 0;
	if(type == 'A'){
		for(int i = 0;i < VALUE;i++){
			simple_arithmetic += grade[i];
		}
		simple_arithmetic /= VALUE;
		return simple_arithmetic;
	}
	else if(type == 'P'){
		grade[0] *= 5;
		grade[1] *= 3;
		grade[2] *= 2;
		for(int i = 0;i < VALUE;i++){
			weighted_mean += grade[i];
		}
		weighted_mean /= 10;
		return weighted_mean;
	}
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	char average_type;
	float grade[VALUE], average = 0;
	
	printf("Informe as nota do aluno:\n");
	for(int i = 0; i < VALUE;i++){
		scanf("%f", &grade[i]);
	}
	getchar();
	 
	printf("\nInforme o tipo de média que será calculada (digite 'A' para média aritmética e 'P'para média ponderada com pesos 5, 3 e 2):\n");
	scanf("%c", &average_type);
	average = average_function(grade, average_type);
	if(average_type == 'A' || average_type == 'P'){
		printf("Resultado da média: %.2f", average);
	}else{
		printf("Tipo de média inválido.");
	}
}

