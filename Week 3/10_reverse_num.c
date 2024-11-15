//program to find reverse number
#include <stdio.h>
#include <math.h>
int main(){
	int i=0,n,s=0,p,t;
	printf("Enter N\n");
	scanf("%d",&n);
	p=n;
	while(n!=0){
		n/=10;
		s++;
	}
	n=p;
	while(n!=0){
		t = n%10;
		i = i + (t*(pow(10,s-1)));
		n=n/10;
		--s;
	}
	printf("%d",i);
	return 0;
}
