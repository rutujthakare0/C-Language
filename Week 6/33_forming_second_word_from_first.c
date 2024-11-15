#include <stdio.h>
int main(){
	int n,i,m,j,k=0;
	printf("Enter First name length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter First name \n");
    scanf(" %[^\n]s",c);
    printf("Enter Second name length\n");
	scanf("%d",&m);
	char b[m+1];
    printf("Enter second name \n");
    scanf(" %[^\n]s",b);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    if(b[i]==c[j]){
        c[j]='0';
        break;
    }
    for(i=0;i<n;i++)
    if(c[i]=='0')
    k++;
    if(k==m)
    printf("Second name can be formed");
    else
    printf("Second name cant be formed");
    return 0;
}