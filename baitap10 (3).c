#include<stdio.h>
#include<string.h>
void countCharacter(char str[], int length){
	char checkCharacter[length];
	int countCheckCharacter[length], indexCheck = 0, indexCount = 0;
	for(int i = 0; i < length; i++){
		int found = 0;
		for(int j = 0; j < indexCheck; j++){
			if(str[i] == checkCharacter[j]){
				found = 1;
				break;
			}
		}
		if(found == 0){
			checkCharacter[indexCheck++] = str[i];
			int count = 0;
			for(int k = 0; k < length; k++){
				if(str[i] == str[k]){
					count++;
				}
			}
			countCheckCharacter[indexCount++] = count;
		}
	}
	for(int i = 0; i < indexCheck; i++){
		printf("Ki tu '%c' xuat hien %d lan\n", checkCharacter[i], countCheckCharacter[i]);
	}
}
int main(){
	char str[] = "bcdac";
	int length = strlen(str);
	countCharacter(str, length);
	return 0;
}
