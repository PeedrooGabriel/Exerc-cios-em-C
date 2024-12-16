#include <stdio.h>
#include <locale.h>

void converter(float grade){
	if(grade >= 9.0 && grade <= 10.0){
		printf("Nota convertida!\n\nResultado: A");
	}
	else if(grade >= 7.0 && grade < 9.0){
		printf("Nota convertida!\n\nResultado: B");
	}
	else if(grade >= 5.0 && grade < 7.0){
		printf("Nota convertida!\n\nResultado: C");
	}
	else if(grade >= 3.0 && grade < 5.0){
		printf("Nota convertida!\n\nResultado: D");
	}
	else if(grade >= 0.0 && grade < 3.0){
		printf("Nota convertida!\n\nResultado: E");
	}
	else{
		printf("Nota inválida! Somente serão aceitos valores de 0 a 10");
	}
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float grade;
	
	printf("Conversor de notas escolares numéricas:\n\n");
	printf("Informe a nota numérica do aluno para a conversão ser efetuada:\n");
	scanf("%f", &grade);
	converter(grade);
	
	return 0;
}
