#include <stdio.h>
int main(){
	int i,j,s=1,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=1;j<=n-i;j++){
		printf("%d ",s);
		s++;
	}
		printf("\n");
	}
	return 0;
}
