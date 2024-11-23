#include <stdio.h>
char* rev(char *p,int n){
	int i,j;
	char t;
	for(i=0;i<n/2;i++){
		t=p[n-i-1];
		p[n-i-1]=p[i];
		p[i]=t;
	}
	return p;
}
int main(){
	int n,i,k;
	printf("Enter string size");
	scanf("%d",&n);
	char a[n+1];
	printf("Enter string");
	scanf(" %[^\n]s",a);
	printf("%s",rev(a,n));
	return 0;
}
