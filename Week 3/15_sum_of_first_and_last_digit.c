//program to find sum of first and last digit in a number
#include <stdio.h>
int main(){
	int i,n,m;
	printf("Enter number\n");
	scanf("%d",&i);
	n=i%10;
	while(i!=0){
		m=i;
		i/=10;
    }
	printf("%d",n+m);
	return 0;
}