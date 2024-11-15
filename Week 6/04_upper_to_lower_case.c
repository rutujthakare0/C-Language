#include <stdio.h>
int main(){
	int i,d=0,l=0,n;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
		c[i]=c[i]+32;
	for(i=0;c[i]!='\0';i++)
	printf("%c",c[i]);
	return 0;
}
