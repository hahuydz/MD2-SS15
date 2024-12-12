#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
	char str[] = "hello world";
	int length = strlen(str);
	if(str[length - 1] == '\n'){
		str[length - 1] == '\0';
		length--;
	}
	str[0] = toupper(str[0]);
	for(int i = 0; i < length; i++){
		if(str[i] == ' '){
			str[i+1] = toupper(str[i+1]);
		}
	}
	printf("%s", str);
	return 0;
}
