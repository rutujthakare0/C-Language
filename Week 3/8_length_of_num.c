//program to length of number
#include <stdio.h>
int main(){
	int n,s=0;
	printf("Enter number\n");
	scanf("%d",&n);
	while(n!=0){
		n/=10;
		s++;
	}
	printf("%d",s);
	return 0;
}
