#include <stdio.h>
int main(){
	int n,i,m=0;
    char t;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++)
    if(c[i]<='9'&&c[i]>='0'){
    printf("Invalid String");
    m=1;
    break;
    }
    if(m==0){
    for(i=0;i<n/2;i++){
        t=c[n-i-1];
        c[n-i-1]=c[i];
        c[i]=t;
    }
    printf("%s",c);
    }
    return 0;
}