#include <stdio.h>
int main(){
	int n,i,k=0;
	printf("Enter String length\n");
	scanf("%d",&n);
	char c[n+1];
    char b[n+1];
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++){
        if(c[i]!='('&&c[i]!=')'){
        b[k]=c[i];
        k++;
    }}
    printf("%s",b);
    return 0;
}