#include <stdio.h>
int main(){
	int n,i,j,k=0;
	printf("Enter String length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n/2;i=i+2)
    if(c[i]!=c[i+2]){
    printf("No");
    goto abc;
    }
    for(i=1;i<=n/2;i=i+2)
    if(c[i]!=c[i+2]){
    printf("No");
    goto abc;
    }
    printf("Yes");
    abc:
    return 0;
}