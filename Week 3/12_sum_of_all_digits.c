//sum of all digits of given number
#include <stdio.h>
int main(){
	int i,n=0;
	printf("Enter number");
	scanf("%d",&i);
	while(i!=0){
		n = n + (i%10);
		i=i/10;
	}
	printf("%d",n);
	return 0;
}
