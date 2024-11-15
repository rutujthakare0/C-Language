#include <stdio.h>
int main(){
	int n,i,t,j;
	printf("Enter string length\n");  // ({<[]>})
	scanf("%d",&n);
	char c[n+1];
    int a[4]={0,0,0,0};
    int b[4]={0,0,0,0};
	printf("Enter string\n");
    scanf(" %[^\n]s",c);
	for(i=0;i<n;i++)
    if(c[i]=='(')
    a[0]++;
    else if(c[i]=='{')
    a[1]++;
    else if(c[i]=='<')
    a[2]++;
    else if(c[i]=='[')
    a[3]++;
    else if(c[i]==')')
    b[0]++;
    else if(c[i]=='}')
    b[1]++;
    else if(c[i]=='>')
    b[2]++;
    else if(c[i]==']')
    b[3]++;
    else;
    for(i=0;i<4;i++)
    if(a[i]!=b[i]){
        printf("Invalid String");
        goto abc;
    }
    printf("Valid String");
    abc:
    return 0;
}