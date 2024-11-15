#include <stdio.h>
int main(){
	int i,d,n,k;
	char t;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	fflush(stdin);
	printf("Enter new char\n");
	scanf("%c",&t);
	printf("Enter Position\n");
	scanf("%d",&k);
	for(i=0;c[i]!='\0';i++)
	d++;
	char b[n+1];
	for(i=0;i<n-1;i++)
	b[i]=c[i];
	b[k-1]=t;
	for(i=k;i<n+1;i++)
	b[i]=c[i-1];
	for(i=0;i<n+1;i++)
	printf("%c",b[i]);
	return 0;
}
