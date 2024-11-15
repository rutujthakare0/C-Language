#include <stdio.h>
int main(){
	int n,i,v=0,d=0,c=0,w=0;
	printf("Enter string length\n");
	scanf("%d",&n);
	char a[n+1];
	printf("Enter string\n");
    scanf(" %[^\n]s",a);
	for(i=0;i<n;i++){
		if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='I'||a[i]=='E'||a[i]=='O'||a[i]=='U')
		v++;
		else if(a[i]==' ')
		w++;
		else if(a[i]>='0'&&a[i]<='9')
		d++;
		else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		c++;
	}
	printf("Number of vowels is %d\nNumber of consonants is %d\nNumber of white spaces is %d\nNumber of digits is %d\n",v,c,w,d);
	return 0;
}