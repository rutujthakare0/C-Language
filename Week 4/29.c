#include <stdio.h>
int main(){
	int i,j,s,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		if(i%2==0){
		for(s=0;s<n-1-i;s++)
		printf(" ");
		for (j=0;j<i+1;j++)
		printf("*");
		printf("\n");
		}else{
		for(s=0;s<n-1-i;s++)
		printf(" ");
		for (j=0;j<i+1;j++)
		printf("-");
		printf("\n");
	}
	}
	for(i=0;i<n;i++){
		if(i%2==0){
		for(s=0;s<i;s++)
		printf(" ");
		for (j=0;j<n-i;j++)
		printf("*");
		printf("\n");
		}else{
		for(s=0;s<i;s++)
		printf(" ");
		for (j=0;j<n-i;j++)
		printf("-");
		printf("\n");
	}
	}
	return 0;
}
