#include <stdio.h>
int main(){
	int n,i,t,j;
	printf("Enter string length\n");  
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++){
        t=0;
    for(j=i+1;j<n;j++){
        if(c[i]==c[j])
            t++;
        }
        if(t==0)
        goto abc;
        }
        abc:
        printf("%c",c[i]);
    return 0;
}