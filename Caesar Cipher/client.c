#include<stdio.h>
#include<stdlib.h>
#include "caesar.h"

int main(int argc, char **argv){
	char *text = argv[1];
	int shift = atoi(argv[2]);
	caesar_cipher(text, shift);
	printf("%s",text);
	return 0;
}
