#include <stdio.h>
int main(){
	int n,i;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
	printf("Enter string\n");
    scanf(" %[^\n]",c);
	if (c[0]>='a'&&c[0]<='z')
        c[0]=c[0]-32;
	for(i=1;c[i]!='\0';i++){
		if(c[i]==' '&&c[i+1]>='a'&&c[i+1]<='z')
		c[i+1]=c[i+1]-32;
	}
    printf("New string: %s\n",c);
	return 0;
}