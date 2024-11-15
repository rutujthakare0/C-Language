#include <stdio.h>
int main(){
	int n,i,t=0,j;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    char b[n+1];
    printf("Enter string 1\n");
    scanf(" %[^\n]s",c);
    fflush(stdin);
    printf("Enter string 2\n");
    scanf(" %[^\n]s",b);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(c[i]==b[j]){
        t++;
        break;
    }
    if(t==n)
    printf("Anagram");
    else 
    printf("Not anagram");
    return 0;
}