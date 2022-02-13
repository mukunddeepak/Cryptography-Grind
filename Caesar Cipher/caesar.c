#include<stdio.h>
#include<ctype.h>

int caesar_cipher(char *text, int shift){
	int i=0;
	char ch;
	while(text[i]!='\0'){
		ch=text[i];
		if(isupper(text[i])){
			ch = (ch+shift-65)%26 + 65;
		}
		else{
			ch=(ch+shift-97)%26 + 97;
		}
		text[i]=ch;
		i++;
	}
	return 1;
}

