#include <stdio.h>
int main(){
	int n,i,m,j;
    char t,u;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter First string \n");
    scanf(" %[^\n]s",c);
	char b[n+1];
    printf("Enter second string \n");
    scanf(" %[^\n]s",b);
    char a[2][n];
    for(i=0;i<n;i++){
        a[1][i]=c[i];
        a[2][i]=b[i];
    }
    for(i=0;i<n;i++){
        t=a[1][i];
        u=a[2][i];
    for(j=0;j<n;j++)
    if(a[1][j]==t&&a[2][j]!=u){
        printf("Non isomorphic");
        goto abc;
    }}
    printf("Isomorphic");
    abc:
    return 0;
}