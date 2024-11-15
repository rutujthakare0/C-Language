//program to find sum of first n natural numbers
#include <stdio.h>
int main(){
	int n,i,s=0;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		s=s+i;
	}
	printf("%d",s);
	return 0;
}
