#include <stdio.h>

int fatorial(int n);

int main() {
	int num;
	scanf("%d", &num);
	
	r = fatorial(num);
	if(r== -1)	printf("Entrada inv�lida");
	else
	printf("%d", fatorial(num));
}

/*
Fun��o: calcular fatorial
Entrada: n inteiro
Sa�da: fatorial de n, se n >0 ou -1, se n<0

*/

int fatorial(int n) {
	if(n==0) {
		return 1;
	}
	if(n>0) {
		return n * fatorial(n-1);
	}
	return -1;
}
