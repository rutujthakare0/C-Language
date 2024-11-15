#include <stdio.h>
int main(){
    int n,i,t=-1,c=0,j,k,m=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1]){
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
    }
    for(i=0;i<n;i++) //  1 2 2 3 5 5 6 
    if(a[i]>t){
    t=a[i];
    c++;
    }
    int b[c];
    for(i=0;i<n-1;i++){
        if(a[i+1]>a[i]){
            b[m]=a[i];
            m++;
        }
        b[c-1]=a[n-1];    
    }
    for(i=0;i<c;i++){
        printf("%d",b[i]);
    }
    return 0;
}