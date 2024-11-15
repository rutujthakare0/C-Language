#include <stdio.h>
int main(){
	int i,j,s,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=0;j<i+1;j++)
		printf("%c ",65+j-i+n-1);
		printf("\n");
	}
	return 0;
}
