#include <stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter number of rows");
	scanf("%d",&n);
	printf("Enter starting int");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		for (j=0;j<i+1;j++){
		printf("%d",k);	
		}
		k++;
		printf("\n");
	};
	k--;
	for(i=0;i<n;i++){
		for (j=0;j<n-i;j++){
			printf("%d",k);
		}
		k--;
		printf("\n");
	}
	return 0;
}
