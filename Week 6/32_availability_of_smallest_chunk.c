#include <stdio.h>
int main(){
	int n,i,m=1,k,z=1000;
    char t;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    fflush(stdin);
    printf("Enter character\n");
    scanf("%c",&t);
    for(i=0;i<n;i++){
        if(c[i]==t&&c[i+1]==t)
        m++;
        else if(c[i]==t&&c[i+1]!=t){
        k=m;
        m=1;
        if(k<=z){
            z=k;
        }
    }}
    if(z!=1&&z!=0)
    printf("%d",z);
    else 
    printf("Character not found");
    return 0;
}