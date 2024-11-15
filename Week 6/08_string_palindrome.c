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
	for(i=0;i<d/2;i++)
		if(c[i]!=c[d-i-2]){
		printf("Not Palindrome");
		goto abc;
	}
	printf("Palindrome");
	abc:
	return 0;
}
