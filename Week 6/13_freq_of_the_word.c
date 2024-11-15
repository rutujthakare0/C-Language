#include <stdio.h>
int main(){
	int n,i,j,t,m=0;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
	printf("Enter string\n");
    scanf(" %[^\n]s",c);
	for(i=0;i<n-5;i++)
	if((c[i]==' ')&&(c[i+1]=='t'||c[i+1]=='T')&&(c[i+2]=='h'||c[i+2]=='H')&&(c[i+3]=='e'||c[i+3]=='E')&&(c[i+4]==' '))
	m++;
	if((c[0]=='t'||c[0]=='T') && (c[1]=='h'||c[1]=='H')&&(c[2]=='e'||c[2]=='E')&&(c[3]==' '))
	m++;
	if((c[n-3]=='t'||c[n-3]=='T')&&(c[n-2]=='h'||c[n-2]=='H')&&(c[n-1]=='e'||c[n]=='E')&&(c[n-4]==' '))
	m++;
	printf("The is repeated %d times",m);
	return 0;
}