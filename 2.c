#include <stdio.h>

int main(){
	int num[10];
	
	for(int i = 0; i < 10; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 10; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	int soma = 0;
	for(int i = 0; i < 10; i++) {
		soma += num[i];
	}
	printf("\n\nSoma: %d", soma);
	
	return 0;
}