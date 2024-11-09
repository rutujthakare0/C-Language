// vowel or consonant
#include <stdio.h>
int main(){
	char a1;
	printf("Enter char \n");
	scanf("%c",&a1);
	if( a1=='a'||a1=='e'||a1=='i'||a1=='o'||a1=='u' || a1=='A'||a1=='E'||a1=='I'||a1=='O'||a1=='U' ){
		printf("Vowel");
	}else{
		printf("Consonant");
	}	
	return 0;
}
