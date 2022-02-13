#include<stdio.h>
#include<string.h>
#include<ctype.h>

int caesar_cipher(char *text, int shift){
	int i=0;
	char ch;
	while(text[i]!='\0'){
		ch=text[i];
		if(isupper(text[i])){
			ch = (char)((ch+shift-65)%26 + 65);
		}
		else{
			ch=(char)((ch+shift-97)%26 + 97);
		}
		text[i]=ch;
		++i;
	}
	return 1;
}
int decrypt(char *text, int shift){
	int i=0;
	char ch;
	while(text[i]!='\0'){
		ch = text[i];
		if(isupper(text[i])){
			ch = (char)((ch-shift-65)%26 + 65);
		}else{
			ch=(char)((ch-shift-97)%26+97);
		}
		text[i]=ch;
		++i;
	}
	return 1;
}
