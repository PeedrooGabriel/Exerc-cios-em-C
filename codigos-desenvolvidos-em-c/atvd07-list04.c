#include <stdio.h>
#include <string.h>
#include <locale.h>

int char_counter(char string[50],char character){
	int counter = 0;
	for(int i = 0;string[i] != '\n';i++){
		if(string[i] == character){
			counter++;
		}
	}
	return counter;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char text[50], character;
	int occurrences;
	
	printf("Digite um texto de até 50 caracteres:\n");
	fgets(text, sizeof(text),stdin);
	text[strcspn(text,"\n")] = '\n';
	
	printf("Informe o caractere que você deseja saber o número de vezes que ele aparece:\n");
	scanf("%c", &character);
	
	occurrences = char_counter(text, character);
	printf("O caractere '%c' foi econtrado %ix no texto.", character, occurrences);
	

	
}
