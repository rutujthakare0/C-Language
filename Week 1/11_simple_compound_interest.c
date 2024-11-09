//program to find simple interest
#include <stdio.h>
#include <math.h>
int main(){
	int p,n,r,N;
	float s,c;
	printf("Enter principle");
	scanf("%d",&p);	
	printf("Enter time");
	scanf("%d",&n);	
	printf("Enter rate of interest");
	scanf("%d",&r);
	s=(p*n*r)/100.0;
	printf("Simple interest = %f",s);
	return 0;	
    printf("Enter the number of times interest is compounded");
    scanf("%d", &N);
    c=p*pow(1+r/(100*n),N*n) - p;
    printf("Compound Interest = %f", c);
	return 0;
}
