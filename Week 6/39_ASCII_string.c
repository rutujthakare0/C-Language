#include <stdio.h>
int main(){
	int n,i,j,k=0;
	printf("Enter String length\n");
	scanf("%d",&n);
	char c[n+1];
    int b[26];
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    for(i=0;i<26;i++)
    b[i]=i+1;
    for(i=0;i<n;i++)
    b[c[i]-'a']--;
    for(i=0;i<n;i++)
    if(b[i]!=0&&b[i]!=i+1){
        printf("No");
        goto abc;
    }
    printf("Yes");
    abc:
    return 0;
}