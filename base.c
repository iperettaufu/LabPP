/*
 * Arquivo: base.c
 * Data criação: 27/out/22
 * Autor: Igor Peretta
 * Meu primeiro programa em C
 */

#include <stdio.h>

int main(int argc, char** argv) {
	for(int i=0; i < argc; i++)
		printf("%s\n", argv[i]);
	printf("Bom dia, meu querido mestre supremo!\n");
	return 0;
}
