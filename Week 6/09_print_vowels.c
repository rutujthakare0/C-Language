#include <stdio.h>
int main(){
	int n,i;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string\n");
	scanf("%s",c);
	for(i=0;i<n;i++){
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		printf("%c",c[i]);
	}
	return 0;
}
