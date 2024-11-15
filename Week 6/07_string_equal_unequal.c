#include <stdio.h>
int main(){
	int i,d=0,l=0,n;
	printf("Enter string1 length\n");
	scanf("%d",&n);
	char c[n];
	printf("Enter string1\n");
	scanf("%s",c);
	printf("Enter string2 length\n");
	scanf("%d",&n);
	char s[n];
	printf("Enter string2\n");
	scanf("%s",s);
	for(i=0;c[i]!='\0';i++)
		d++;
	for(i=0;s[i]!='\0';i++)
		l++;
	if(l!=d)
		printf("Strings are not equal");
	else{
		for(i=0;i<d;i++){
			if(c[i]-s[i]!=0){
				printf("Unequal strings");
				goto abc;
			}}}
		printf("Equal strings");	
		abc:
	return 0;
}
