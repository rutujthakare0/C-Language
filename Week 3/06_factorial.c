//program to find factorial
#include <stdio.h>
int main(){
	int n,i,s=1;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s*i;
	}
	printf("%d",s);
	return 0;
}
