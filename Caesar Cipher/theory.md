--------------------------------------------------------------------------
#Caesar Cipher
--------------------------------------------------------------------------

- One of the earliest and simplest ciphers throughout history

- A very simple substitution cipher

- Julius Caesar communicated to his officials using this cipher

- A key is used in every cipher for encrypting as well as decrypting and for caesar's cipher it was the shift key.

##Algorithm

**Inputs:**
	1. Text to be encoded, _text_ or Input text file to be encrypted
	2. Shift Value, _s_ //Julius Caesar used shift value as 3!
**Outputs:**
	1. Encrypted Cipher Text or Encrypted Cipher Text File
	
i<-0
newtext<-""
while text[i]!='\0' do
	newtext[i]<-alpha((order(text[i])+s)%26)
	i<-i+1
return newtext

##Example:

**Message:** ETTUBRUTE
**Shift:** 3
**Cipher:** HWWXEUXWH
