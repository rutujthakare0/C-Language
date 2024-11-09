// vowel or consonant
#include <stdio.h>
int main(){
	char a1;
	printf("Enter char \n");
	scanf("%c",&a1);
	if(a<='z'&&a>='a'){
		printf("lowercase");
	}else if(a>='A'&&a<='Z'){
		printf("Uppercase");
	}else{
		printf("Invalid");
	}
	return 0;
}
