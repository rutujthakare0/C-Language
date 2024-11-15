#include <stdio.h>
int main(){
	int i,d,n;
	char t;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	d++;
	for(i=0;i<d/2;i++){
		t=c[i];
		c[i]=c[d-i-2];
		c[d-2-i]=t;
	}
	for(i=0;c[i]!='\0';i++)
		printf("%c",c[i]);
	return 0;
}
