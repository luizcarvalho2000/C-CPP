#include <iostream>

int main(int argc, char** argv) {
	
	float nota1;
	float nota2;
	float media;
	
	printf("Insira nota 1: \n");
	scanf("%f",&nota1);
	
	printf("Insira nota 2: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf ("media = %f", media);
	return 0;
}