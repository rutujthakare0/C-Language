#include <stdio.h>
int main(){
    int i,n,j,k,c=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        c=0;
    for(j=i+1;j<n;j++){
        if(a[i]==a[j])
            c++;
        }
        if(c==0)
        goto s;
        }
        s:
        printf("%d",a[i]);
    return 0;
}