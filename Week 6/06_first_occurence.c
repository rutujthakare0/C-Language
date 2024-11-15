#include <stdio.h>
int main(){
	int i,n;
	char t;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	fflush(stdin);
	printf("Enter character\n");
	scanf("%c",&t);
	for(i=0;c[i]!='\0';i++)
		if(c[i]==t){
			printf("\nFirst occurence of %c is at position %d",t,i+1);
			break;
		}
	return 0;
}
