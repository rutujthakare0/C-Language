#include<stdio.h>
int main(){
	int i,j,n,k=1;
	printf("Enter number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=1;j<7;j++){
			printf("%d",k);
		}
		printf("%d",++k);
		printf("\n");
		}
		else{
		printf("%d",++k);
		--k;
		for(j=1;j<7;j++){
			printf("%d",k);
		}
		k++;
		printf("\n");
	}
	
	}
	return 0;
}
