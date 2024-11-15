#include <stdio.h>
int main(){
	int i,d=0,n;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
		d++;
	char b[d];
	for(i=0;i<d;i++)
		b[i]=c[i];
	for(i=0;i<d;i++)
		printf("%c",b[i]);
	return 0;
}
