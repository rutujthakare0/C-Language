#include <stdio.h>
int s(int a){
	int n;
	if(a==1)
	return 1;
	if(a==2)
	return 2;
	if(a==3)
	return 3;
	n=s(a-1)+s(a-2)+s(a-3);
	return n;
}
int main(){
	int n,i,k;
	printf("Enter n");
	scanf("%d",&n);
	printf("%d",s(n));
	return 0;
}
