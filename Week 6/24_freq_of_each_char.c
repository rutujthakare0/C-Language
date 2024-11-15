#include <stdio.h>
int main(){
	int n,i,t,j;
	printf("Enter string length\n");  // ({<[]>})
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
        if(c[j]>c[j+1]){
            t=c[j];
            c[j]=c[j+1];
            c[j+1]=t;
    }
    t=1;
    for(i=0;i<n-1;i++){
        if(c[i+1]==c[i])
        t++;
        else if(c[i]!=' '){    
        printf("%c - freq = %d\n",c[i],t);
        t=1;
    }}
    printf("%c - freq = %d\n",c[n-1],t);
    return 0;
}