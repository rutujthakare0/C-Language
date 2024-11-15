#include <stdio.h>
int main(){
	int i,d=0;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	d++;
	printf("String length is %d",d);
	return 0;
}
