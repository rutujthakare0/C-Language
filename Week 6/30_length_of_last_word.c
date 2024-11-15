#include <stdio.h>
int main(){
	int n,i,t=0,m=0;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++)
    if(c[i]== ' ')
        m++;
    if(m==n)
        printf("-1");
    else{
    for(i=n-1;i>=0&&m!=n;i--)
    if(c[i]==' ')
    break;
    else
    t++;
    }
    printf("Length of last word is %d",t);
    return 0;
}