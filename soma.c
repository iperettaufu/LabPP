/*
 * Arquivo: soma.c
 * Data criação: 27/out/22
 * Autor: Igor Peretta
 * Soma dois numeros
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if(argc < 3) {
		printf("Uso: ./soma a b (com a,b ∈ Z)\n");
		return -1;
	}
	printf("Soma = %d\n", atoi(argv[1]) + atoi(argv[2]));
	return 0;
}
