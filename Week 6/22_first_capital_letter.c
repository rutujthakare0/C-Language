#include <stdio.h>
int main(){
	int n,i,t,j;
	printf("Enter string length\n");  // ({<[]>})
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++){
        if(c[i]<91 && c[i>64]){
            printf("%c",c[i]);
            i=n+2;
        }
    }
    return 0;
}