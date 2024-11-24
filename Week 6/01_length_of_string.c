#include <stdio.h>
int main(){
	int i,d=0;
	char c[1000];
	printf("Enter string\n");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	d++;
	printf("String length is %d",d);
	return 0;
}
