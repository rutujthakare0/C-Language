#include <stdio.h>
int main(){
	int i,j,s,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(s=0;s<i;s++)
		printf(" ");
		for (j=0;j<2*n-2*i-1;j++){
		if(j==0)
		printf("*");
		else if(j==2*n-2*i-2)
		printf("*");
		else
		printf("-");
	}
		printf("\n");
	}
	return 0;
}
