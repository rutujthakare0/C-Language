//program to convert km to m,cm,mm
#include <stdio.h>
int main(){
	int k;
	printf("Enter Value in Km \t");
	scanf("%d",&k);
	printf("Given value in m is %d\n",(k*1000));		
	printf("Given value in cm is %d\n",(k*100000));
	printf("Given value in m is %d\n",(k*1000000));
	return 0;
}
