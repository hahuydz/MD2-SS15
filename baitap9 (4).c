#include<stdio.h>
#include<string.h>
void removeCharacter(char str[], int length, char character){
	for(int i = 0; i < length ; i++){
		if(str[i] == character){
			for(int j = i; j < length; j++){
				str[j] = str[j+1];
			}
			str[length - 1] = '\0';
			length--;
			i--;
		}
	}
	printf("%s", str);
}
int main(){
	char str[] = "hello world, o";
	char character;
	printf("Nhap ki tu: ");
	scanf("%c", &character);
	int length = strlen(str);
	removeCharacter(str, length, character);
	return 0;
}
