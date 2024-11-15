#include <stdio.h>
int main(){
	int n,i,j=0;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
	printf("Enter string\n");
    scanf(" %[^\n]s",c);
	for(i=0;i<n;i++)
	if(c[i]==' ')
	j++;
	printf("Number of words is %d",++j);	
    return 0;
}