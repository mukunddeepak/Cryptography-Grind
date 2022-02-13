#include<stdio.h>
#include<stdlib.h>
#include "caesar.h"

int main(int argc, char **argv){
	char *text = argv[2];
	int shift = atoi(argv[3]);
	char *flag = argv[1];
	if(flag[1]=='D'){
		decrypt(text, shift);
		printf("%s\n",text);
	}else{
		caesar_cipher(text, shift);
		printf("\n%s\n",text);
	}
	return 0;
}
