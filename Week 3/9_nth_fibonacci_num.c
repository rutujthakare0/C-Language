// program to print nth fibonacci number
#include <stdio.h>  // 0 1 1 2 3 5 8 13 21
int main(){
	int n,i=0,j=1,k,l=0;
	printf("Enter number\n");
	scanf("%d",&n);
	while(l<=(n-3)){
		k=i+j;
		i=j;
		j=k;
		l++;
	}
	printf("%d",k);
	return 0;
}
