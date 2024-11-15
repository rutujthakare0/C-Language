//program to check if the given number is palindrome or not
#include <stdio.h>
int main(){
    int a,s=0,k;
    printf("Enter number\n");
    scanf("%d",&a);
    k=a;
    while(a!=0){
        s=s*10+a%10;
        a/=10;
    }
    if(k==s)
    printf("Given number is a palindrome");
    else
    printf("Given number is not a palindrome");
    return 0;
}