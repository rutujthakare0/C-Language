#include <stdio.h>
int main(){
	int n,i,j,t,m=-1;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
	int b[26]={0};
	printf("Enter string\n");
    scanf(" %[^\n]s",c);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(c[j]>c[j+1]){
			t=c[j];
			c[j]=c[j+1];
			c[j+1]=t;
	}
	for(i=0;i<n;i++)
		b[c[i]-'a']++;
    // for(i=0;i<26;i++)
	// if(b[i]!=0)
	// printf("%c is repeated %d times \n",97+i,b[i]);
	for(i=0;i<26;i++)
	if(b[i]>=m){
	m=b[i];
	t=i;
	}
	for(i=0;i<26;i++)
	if(m==b[i])
	printf("%c ",97+i);
	printf(" Repeated maximum times - %d\n",m);
	for(i=0;i<26;i++)
	if(b[i]<=m && b[i]!=0){
	m=b[i];
	t=i;
	}
	for(i=0;i<26;i++)
	if(m==b[i])
	printf("%c ",97+i);
	printf(" Repeated minimum times - %d",m);
	return 0;
}