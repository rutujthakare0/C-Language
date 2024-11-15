#include <stdio.h>
int main(){
	int n,i,j,k=0;
	printf("Enter String length\n");
	scanf("%d",&n);
	char c[n+1];
    char b[n+1];
    int a[52]={0};
    printf("Enter string \n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++){
        if(c[i]==' '){
            b[k]=' ';
            k++;
            continue;
        }
        else if(c[i]>='A'&&c[i]<='Z'){
        if(a[c[i]-'A'+26]==0){ //+26 because in a[52], first 26 for lower case next for upper.
        b[k]=c[i];
        k++;
        a[c[i]-'A'+26]++;
        continue;
        }}
        else if(c[i]>='a'&&c[i]<='z'){
        if(a[c[i]-'a']==0){
        b[k]=c[i];
        k++;
        a[c[i]-'a']++;
        }}}
    b[k]='\0';
    printf("%s",b);
    return 0;
}