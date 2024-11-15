#include <stdio.h>
int main(){
	int n,i,t,j;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    int a[26]={0};
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    if(n<26)
    goto abc;
    for(i=0;i<n&&c[1]!=' ';i++)
    a[c[i]-'a']++;{
    for(i=0;i<26;i++)
    if(a[i]==0){
        printf("Not a Pangram");
        goto abc;
    }
    printf("Pangram");
    }
    abc:
    return 0;
}