#include <stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=0;j<i+1;j++)
		printf("*");
		printf("\n");
	}
	for(i=0;i<n;i++){
		for (j=0;j<n-i;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
