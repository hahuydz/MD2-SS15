#include<stdio.h>
#include<string.h>
void count(char str[], int length){
	int countNumber = 0, countCharacter = 0, countSpecial = 0;
	for(int i = 0; i < length; i++){
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
			countCharacter++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			countNumber++;
		}
	}
	printf("%s", str);
	printf("\nSo ki tu la chu la: %d", countCharacter);
	printf("\nSo ki tu la so la: %d", countNumber);
	printf("\nSo ki tu dac biet la: %d", length - countCharacter - countNumber);
}
int main(){
	char str[] = "Hello my gmail is test123@gmail.com";
	int length = strlen(str);
	if(str[length - 1] == '\n'){
		str[length - 1] = '\0';
		length--;
	}
	count(str, length);
	return 0;
}
