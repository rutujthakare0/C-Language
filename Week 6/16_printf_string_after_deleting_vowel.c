#include <stdio.h>
int main(){
	int n,i,j=0;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
	char b[n+1];
	printf("Enter string\n");
    scanf(" %[^\n]s",c);
	for(i=0;i<n;i++)
	if(c[i]!='a'&&c[i]!='i'&&c[i]!='e'&&c[i]!='o'&&c[i]!='u'&&c[i]!='A'&&c[i]!='I'&&c[i]!='E'&&c[i]!='O'&&c[i]!='U'){
	b[j]=c[i];
	j++;
	}
	for(i=0;i<j;i++)
    printf("%c",b[i]);
    return 0;
}