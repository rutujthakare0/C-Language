#include <stdio.h>
int main(){
	int n,i,m,j,k=0;
	printf("Enter First string length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter First string \n");
    scanf(" %[^\n]s",c);
    printf("Enter Second string length\n");
	scanf("%d",&m);
	char b[m+1];
    char a[n+1];
    printf("Enter second string \n");
    scanf(" %[^\n]s",b);
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    if(c[i]==b[j]&&c[i]!=' '){
        for(k=i;k<n;k++)
        c[k]=c[k+1];
        i--;
        n--;
        break;
    }}}
    printf("%s",c);
    return 0;
}