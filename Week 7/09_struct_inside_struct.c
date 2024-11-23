#include <stdio.h>
#include <string.h>
struct outer{
    int a;
    struct inner{
        int b;
        char c[6];
    }i;
}o;
int main(){
    char ch[6];
    printf("Enter o.i.b\n");
    scanf("%d",&o.i.b);
    printf("%d",o.i.b);
    printf("\nEnter o.i.c\n");
    scanf(" %[^\n]s",ch);
    strcpy(o.i.c,ch);
    printf("Entered string: ");
    printf("%s",o.i.c);
    return 0;
}