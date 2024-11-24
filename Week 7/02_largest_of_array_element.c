#include <stdio.h>
int r(int*p,int n){
	int i,j,t;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(p[j]>p[j+1]){
		t=p[j+1];
		p[j+1]=p[j];
		p[j]=t;
	}
	return p[n-1];
}
int main(){
	int n,i,k;
	printf("Enter array size");
	scanf("%d",&n);
	int*a=(int*)malloc(n*sizeof(int));
	printf("Enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	k=r(a,n);
	printf("largest of array elements is %d",k);
	return 0;
}
